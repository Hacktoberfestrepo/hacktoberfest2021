/** *
	* Features:
		* Automatic & Manual Root Evalutator With Iterations
		* Automatic & Manual Number Of Iterations Predictor
		* Automatic Tolerance Calculator
	* TODO:
		* FIX: Need to add negative root evaluation
		* More Math Functionalities
		* Code Optimization
	* **/
#include <iostream>
#include <string>
#include <iomanip>
#include "tinyexpr.h"

using namespace std;

class BisectionMethod
{
	string expression, tempExpression;
	int decimalPlaces, maxIterations = INT_MAX;
	bool enablePositiveRootEvaluation = true;
public:
	BisectionMethod(const string& formula,bool enablePositiveRootEvaluation = true, int decimalPlaces = 3) :expression(formula), decimalPlaces(decimalPlaces), enablePositiveRootEvaluation(enablePositiveRootEvaluation) {}

	// Automatic Root Evaluation
	long double evaluateRoot()
	{
		long double iteration1 = initialValuesCalculator(), iteration2 = (enablePositiveRootEvaluation) ? (iteration1 + 1) : (iteration1 - 1);
		printf("Inital Values: [%d, %d]\n", int(iteration1), int(iteration2));
		return evaluateRoot(iteration1, iteration2);
	}

	// Manual Root Evaluation With 2 Values As Input
	long double evaluateRoot(long double& a, long double& b, bool enableRoundWithPrecision = true, int currentIteration = 1)
	{ 
		printf("\nIteration: %d\n", currentIteration);
		printf("[%f, %f]\n", a, b);
		long double x = midPoint(a, b), f = expressionEvaluation(x);
		printf("%s = %f\n", tempExpression.c_str(), f);
		long double adjA = 0, adjX = 0, adjB = 0; 
		if (enableRoundWithPrecision) // ? Adjusted to desired decimal values
			adjA = roundWithPrecision(a, decimalPlaces), adjX = roundWithPrecision(x, decimalPlaces), adjB = roundWithPrecision(b, decimalPlaces); 
		else
		{
			adjX = x;
			decimalPlaces = maxIterations;
		}
		if (adjA == adjX || adjB == adjX || a == x || b == x)
		{
			if(!enableRoundWithPrecision)
				printf("Root is: %g [Approximation Upto: %d Decimal Places]\n", adjX, currentIteration);
			else
				printf("Root is: %g [Approximation Upto: %d Decimal Places]\n", adjX, decimalPlaces);
			return adjX;
		}
		if (currentIteration != maxIterations)
			adjX = (f > 0) ? (evaluateRoot(a, x, enableRoundWithPrecision, ++currentIteration)) : (evaluateRoot(x, b, enableRoundWithPrecision, ++currentIteration));
		return adjX;
	}

	// Automatic Number Of Iterations Calculator
	inline void calculateNumberOfIterations(int ebsilon = 3)
	{
		int iteration1 = initialValuesCalculator(), iteration2 = iteration1 + 1;
		calculateNumberOfIterations(iteration1, iteration2, ebsilon);
	}

	// Manual Needs The Two Required Values
	inline int calculateNumberOfIterations(const double& a, const double& b, int ebsilon = 3)
	{
		bool isGreater = false;
		double x = log10(b * (b - a));
		double result = x - ebsilon;
		if (result < 0)
		{
			isGreater = true;
			result *= -1;
		}
		result = (round(result / log10(2)));
		if (isGreater)
			printf("Prediction: n >= %d\n", int(result));
		else
			printf("Prediction: n <= %d\n", int(result));
		return int(result);
	}

	// Automatic Tolerance Calculator
	inline void calculateTolerance(int decimalPlaces = 3)
	{
		long double a = initialValuesCalculator(), b = (enablePositiveRootEvaluation) ? (a + 1) : (a - 1);
		int n = calculateNumberOfIterations(a, b);
		double Pn = evaluateRoot(), P = evaluateRoot(a, b, false);
		double absoluteError = abs(Pn - P), undefinedValue = abs(unKnownValueCalculate(a, b, n)), ebsilon = pow(10, -decimalPlaces);
		if (absoluteError <= undefinedValue && undefinedValue < ebsilon)
			printf("\nResult: %f <= %f < %g\n", absoluteError, undefinedValue, ebsilon);
		else
			printf("\nInvalid Answer!\n");
	}

private:

	// Calculates the starting intervals
	int initialValuesCalculator()
	{
		double iteration1 = 0, iteration2 = (enablePositiveRootEvaluation) ? (iteration1 + 1) : (iteration1 - 1), a, b;
		a = expressionEvaluation(iteration1), b = expressionEvaluation(iteration2);
		while ((a > 0 && b > 0) || (a < 0 && b < 0))
		{
			iteration1 = iteration2;
			a = expressionEvaluation(iteration1);
			(enablePositiveRootEvaluation) ? (++iteration2) : (--iteration2);
			b = expressionEvaluation(iteration2);
		}
		return int(iteration1);
	}

	// Calculates the Unknown value
	double unKnownValueCalculate(const double& a, const double& b, const int& n)
	{
		return ((1 / pow(2, n)) * (b - a));
	}

	// Round off the value with a set precision
	double roundWithPrecision(const double& x, const int& decimalPlaces)
	{
		double powerOf10 = pow(10, decimalPlaces);
		return ((trunc(x * powerOf10) / powerOf10));
	}

	// Evaluates the expression and returns the result
	double expressionEvaluation(const double& x)
	{
		tempExpression = insertValuesInExpression(x);
		const char* result = tempExpression.c_str();
		return (te_interp(result, 0));
	}

	// Inserts the values back into the string after performing operations
	string insertValuesInExpression(const double& x)
	{
		string tempExpression = replace(expression, "sin(x)", to_string(sin(x)));
		tempExpression = replace(tempExpression, "cos(x)", to_string(cos(x)));
		tempExpression = replace(tempExpression, "tan(x)", to_string(tan(x)));
		tempExpression = replace(tempExpression, "e", to_string(2.7182818284));
		tempExpression = replace(tempExpression, "ln(x)", to_string(log10(x)));
		tempExpression = replace(tempExpression, "log10(x)", to_string(log10(x)));
		tempExpression = replace(tempExpression, "x", to_string(x));
		return tempExpression;
	}

	// Replaces the word with the given word provided in the string
	string replace(string str, const string& from, const string& to)
	{
		size_t startPos = 0;
		while ((startPos = str.find(from, startPos)) != string::npos)
		{
			str.replace(startPos, from.length(), to);
			startPos += to.length();
		}
		return str;
	}

	// Calculates the mid point between two values and returns it
	double midPoint(const double& a, const double& b)
	{
		double temp = ((a + b) / 2);
		printf("(%f + %f) / 2 = %f\n", a, b, temp);
		return temp;
	}
};

int main()
{
	BisectionMethod obj("x^4 - 2x - 10");
	obj.evaluateRoot();
}
