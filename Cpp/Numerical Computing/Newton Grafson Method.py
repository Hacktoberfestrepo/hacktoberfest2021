'''
	* Features: 
		* Automatic and manual root evaluator
		* Ability To Test Validity
	* TODO:
		* OOP may be integerated	
		* Code Enhancement
		* Bug fixes
	* TOOLS:
		* Sympy: A library for Calculus related stuff
		* Regex: Regeular expression for specific pattern in a string
'''
from copy import deepcopy
from sympy import diff
from random import uniform
import re

expression = ""

# Automatically calculates the starting intervals and starts its calculations
def evaluate_root_automatically():
	realValues = [0, 0]
	fValues = [0, 0]
	calculate_inital_values(realValues, fValues)
	print(f'Inital Values: {realValues}')
	x = uniform(realValues[0], realValues[1])
	#test_expression(round(x, 1))
	realValues[1] = x
	evaluate_root(realValues, fValues)
	return 0

# Allows the option to pass the starting intervals manually
def evaluate_root(realValues, fValues, decimal_places=3, iteration = 1):
	if((round(realValues[0], decimal_places) == round(realValues[1], decimal_places)) or (realValues[0] == realValues[1])):
		print(f'The Root Is: {round(realValues[0], decimal_places)}[Approximation Upto: {decimal_places} Decimal Places]\n')
		return 0
	else:
		realValues = calculateX(realValues, fValues)
		print(f'Iteration {iteration}: [{round(realValues[0], 2)}]\nx({iteration+1}) = {round(realValues[1], decimal_places)}')
		iteration += 1
		evaluate_root(realValues, fValues, decimal_places,  iteration)

# Calculates the value of x
def calculateX(realValues, fValues):
	realValues[0] = realValues[1]
	fValues = [evaluate_expression(expression, realValues[0]), evaluate_differential(expression, realValues[0], 1)]
	realValues[1] = (realValues[0] - (fValues[0]/fValues[1]))
	return realValues

# Calculates the inital intervals
def calculate_inital_values(realValues, fValues):
	fValues[0] = evaluate_expression(expression, realValues[0])
	realValues[1]+=1
	fValues[1] = evaluate_expression(expression, realValues[1])
	while ((fValues[0] > 0 and fValues[1] > 0) or (fValues[0] < 0 and fValues[1] < 0)):
		realValues[0] = realValues[1]
		fValues[0] = evaluate_expression(expression, realValues[0])
		realValues[1]+=1
		fValues[1] = evaluate_expression(expression, realValues[1])

# Evaluates a simple expression with derviatives
def evaluate_expression(expression, x):
	temp_expression = deepcopy(expression)
	temp_expression = temp_expression.replace("x", str(x))
	return float(eval(temp_expression))

# Tests the expression
def test_expression(x):
	result = [evaluate_expression(expression, x), evaluate_differential(expression, x), evaluate_differential(expression, x, 2)]
	result = [abs(result[0]*result[2]), pow(result[1], 2)]
	if(result[0] < result[1]):
		print(f'Equality has been satisfied! -> [{round(result[0], 2)} < {round(result[1], 2)}]\n')
	else:
		print(f'Equality has not been satisfied! -> [{round(result[0], 2)} > {round(result[1], 2)}]\n')

# Takes derivatives at any level/range of derivation
def evaluate_differential(expression, x, level=1):
	fx = deepcopy(expression)
	for i in range(level):
		fx = str(diff(fx))
	fx = change_expression_for_evaluation(fx, x)
	return eval(fx)

# Prepares the expression for evaluation
def change_expression_for_evaluation(expression, x):
	expression = expression.replace("x", str(x))
	return change_for_base(expression)

# Function translates sympy supported syntax to regular python's math syntax
# Used Regular Expressions to pull the information, translate and plug it back in
def change_for_base(expression):
	temp_data = str(re.findall('[+-]?((?=\.?\d)\d*\.?\d*)\*\*\d', expression))
	numbers = re.findall('[+-]?((?=\.?\d)\d*\.?\d*)', temp_data)
	if(len(numbers) == 1):
		temp_data = str(re.findall('\*\*\d', expression))
		numbers = [str(numbers[0]), (re.findall('\d', temp_data))[0]]
	i = 0
	while i != len(numbers):
		expression = re.sub('[+-]?((?=\.?\d)\d*\.?\d*)\*\*\d', ("pow(" + str(numbers[i]) + "," + str(numbers[i+1]) + ")"), expression, 1)
		i+=2
	return expression

# Input any expression here
expression = "x**2 - 12" # x**2 == x^2
evaluate_root_automatically()