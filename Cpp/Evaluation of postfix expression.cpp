#include<iostream>
#include<string>

using namespace std;

//****************struct of node type**********************

struct node
{
	int data;
	node* next;
};

//________________________________________________________
//__________________Class Stack___________________________

class stack
{
private:

	//data member top
	node* top;
public:

	//***********Default contructor********************

	stack()
	{
		top = NULL;
	}

	//***********Push function to add string **********

	void Push(int value)
	{
		//creating a temporary node

		node* temp = new node;

		temp->data = value;

		//giving it value

		temp->next = NULL;

		//for the first node

		if (top == NULL)
		{
			top = temp;
			top->next = NULL;
		}

		//inserting node at begning for LIFO

		else
		{

			//adding temp before top

			temp->next = top;

			//moving top to the left most node ie the top

			top = temp;
		}
	}

	//*************POP function to remove top**********

	void Pop()
	{
		node* temp = new node;

		//checking if list is empty

		if (top == NULL)
		{
			cout << "\nStack is empty";
		}

		//decrementing top and unlinking the previous top

		else
		{
			temp = top;
			top = top->next;
		}
	}

	//*********Top function to return top value*******

	node* Top()
	{
		//checking if top is empty

		if (top == NULL)
		{
			cout << "\nStack is empty";
			return NULL;
		}

		//returning top

		else
		{
			return top;
		}
	}

	//checking stack

	bool IsEmpty()
	{
		//checking if top is empty

		if (top == NULL)
		{
			cout << "\nStack is empty";
			return true;
		}
		else
		{
			cout << "\nStack is not empty";
			return false;
		}
	}

	//***************operand or operator**************

	bool Operand(char a)
	{
		//checking if the character is operand

		if (a == '+' || a == '-' || a == '/' || a == '*' || a == '^')
		{
			return true;
		}
		return false;
	}

	//***************OPERATIONS**************

	int operations(int val1, int val2, char op)
	{
		//performing operations and sending the result

		if (op == '+')
		{
			return val1 + val2;
		}
		else if(op == '-')
		{
			return val1 - val2;
		}
		else if (op == '*')
		{
			return val1 * val2;
		}
		else if (op == '/')
		{
			return val1 / val2;
		}
		else if (op == '^')
		{
			return pow(val1,val2);
		}
		else
		{
			return 0;
		}
	}

	//**************Evaluating Postfix**************

	void calculatePostfix(string exp)
	{
		//declaring two variables for operands

		int num1, num2;

		//checking each character of the string

		for (int i = 0; i < exp.length(); i++)
		{
			if (exp[i] == ' ')
			{
				//skip space
			}
			else
			{
				//checking operand or operator

				bool a = Operand(exp[i]);
				if (a == true)
				{
					//storing values fo top two operands in valriables

					num2 = top->data;
					Pop();
					num1 = top->data;
					Pop();

					//performing operation storing result in num2

					num2 = operations(num1, num2, exp[i]);

					//sending num2 in stack

					Push(num2);
				}
				else
				{
					//declaring a variable digit

					int digit = 0;

					//running till last and if its a digit

					while (i < exp.length() && isdigit(exp[i]))
					{
						//if there's a tens 

						digit = digit * 10 + (int)(exp[i] - '0');
						i++;
					}

					//pushing the digit into the stack

					Push(digit);

					//decreasing the i as it have increased 
					//in the last run of while loop 

					i--;
				}
			}
		}
		
		//printing the top value that si the result of expression

		cout << "\nThe answer is: " << top->data;
	}

	//*******************MENU******************

	void menu()
	{
		//declaring string

		string exp;

		//taking input

		cout << "\nEnter the expression: ";
		getline(cin, exp);

		//calling calculating function

		calculatePostfix(exp);
	}

};

//***************DRIVER PROGRAMM***********

int main()
{
	//object 

	stack s;

	//calling function

	s.menu();
	return 0;
}
//**********************************************************************************************************************************************
//___________________________________________________________ANOTHER APPROACH__________________________________________________________________
#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isOperand(char a)
{
	if (a >='0'&&a<='9')
	{
		return true;
	}
	return false;
}
int operation(int num1, char a,int num2)
{
	if (a == '+')
	{
		return num1 + num2;
	}
	else if (a == '-')
	{
		return num1 - num2;
	}
	else if (a == '^')
	{
		return pow(num1, num2);
	}
	else if (a == '*')
	{
		return num1 * num2;
	}
	else if (a == '/')
	{
		return num1 / num2;
	}
	return 0;
}
void Evaluate_Postfix(string exp)
{
	stack<int>S;
	for (int i = 0; i < exp.length(); i++)
	{
		bool a = isOperand(exp[i]);
		if (a == true)
		{
			int digit=0;
			while (i < exp.length() && isdigit(exp[i]))
			{
				digit = digit * 10 + int(exp[i] - '0');
				i++;
			}
			S.push(digit);
			i--;
		}
		else if(exp[i]==' ')
		{

		}
		else
		{
			int num2 = S.top();
			S.pop();
			int num1 = S.top();
			S.pop();
			num2 = operation(num1, exp[i], num2);
			S.push(num2);
		}	
	}
	cout << "The result of " << exp << " is: " << S.top();
}
int main()
{
	string exp;
	cout << "\n\t\tSeperate digit by space for representing different numbers\n";
	cout << "\nEnter the strign exp: ";
	getline(cin, exp);
	Evaluate_Postfix(exp);
	return 0;
}