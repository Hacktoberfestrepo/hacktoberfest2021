/** *
	* Features:
		* Automatic & Manual Root Evalutator With Iterations
	* TODO:
		* Need to add negative root evaluation
		* More Math Functionalities
	* **/
#include <iostream>
#include <string>
#include <iomanip>
#include "tinyexpr.h"

using namespace std;

class RegularFalsiMethod
{
	string expression, tempExpression;
	int decimalPlaces, maxIterations = INT_MAX;
public:
	RegularFalsiMethod(const string& formula, int decimalPlaces = 3) :expression(formula), decimalPlaces(decimalPlaces) {}

	// Automatic Root Evaluation
	long double evaluateRoot()
	{
		long double realValues[2] = { 0, 0 }, fValues[2] = { 0, 0 };
		initialValuesCalculator(realValues, fValues);
		printf("Inital Values: [%d, %d]\n", int(realValues[0]), int(realValues[1]));
		return evaluateRoot(realValues, fValues);
	}

	// Manual Root Evaluation With 2 Values As Input
	long double evaluateRoot(long double *realValues, long double *fValues, bool enableRoundWithPrecision = true, int currentIteration = 1)
	{
		printf("\nIteration: %d\n", currentIteration);
		printf("[%f, %f]\n", realValues[0], realValues[1]);
		long double x = calculateX(realValues, fValues, currentIteration), f = expressionEvaluation(x);
		printf("%s = %f\n", tempExpression.c_str(), f);
		long double adjA = 0, adjX = 0, adjB = 0;
		if (enableRoundWithPrecision) // ? Adjusted to desired decimal values
			adjA = roundWithPrecision(realValues[0], decimalPlaces), adjX = roundWithPrecision(x, decimalPlaces), adjB = roundWithPrecision(realValues[1], decimalPlaces);
		else
		{
			adjX = x;
			decimalPlaces = maxIterations;
		}
		if (realValues[0] == x || realValues[1] == x || adjA == adjX || adjB == adjX)
		{
			if (!enableRoundWithPrecision)
				printf("Root is: %g [Approximation Upto: %d Decimal Places]\n", adjX, currentIteration);
			else
				printf("Root is: %g [Approximation Upto: %d Decimal Places]\n", adjX, decimalPlaces);
			return adjX;
		}
		if (currentIteration != maxIterations)
		{
			(f < 0) ? (realValues[0] = x, fValues[0] = f) : (realValues[1] = x, fValues[1] = f);
			adjX = evaluateRoot(realValues, fValues, enableRoundWithPrecision, ++currentIteration);
		}
		return adjX;
	}

private:

	// Calculates the starting intervals
	void initialValuesCalculator(long double *realValues, long double *fValues)
	{
		fValues[0] = expressionEvaluation(realValues[0]), fValues[1] = expressionEvaluation(++realValues[1]);
		while ((fValues[0] > 0 && fValues[1] > 0) || (fValues[0] < 0 && fValues[1] < 0))
		{
			realValues[0] = realValues[1];
			fValues[0] = expressionEvaluation(realValues[0]);
			fValues[1] = expressionEvaluation(++realValues[1]);
		}
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
	
	// Calculates the value of x
	long double calculateX(long double *realValues, long double *fValues, const int& iteration)
	{
		long double result = (realValues[0] * fValues[1] - realValues[1] * fValues[0]) / (fValues[1] - fValues[0]);
		printf("x(%d) = %f\n", iteration, result);
		return result;
	}
};

int main()
{
	RegularFalsiMethod obj("x*e^x - 2", 4);
	//long double realValues[2] = { 2.5, 3 }, fValues[2] = {-0.8675557431, 0.5723603708};
	obj.evaluateRoot();
}