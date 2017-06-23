/*The user is asked to enter 2 floating point numbers (use doubles). 
The user is then asked to enter one of the following mathematical symbols: +, -, *, or /.
The program computes the answer on the two numbers the user entered and prints the results. 
If the user enters an invalid symbol, the program should print nothing.*/

#include <iostream>
using namespace std;

double getDouble()
{
	cout<<"Enter a double: ";
	double x;
	cin>>x;
	return x;
}
	
char getOperator()
{
	cout<<"Enter an operator: ";
	char op;
	cin>>op;
	return op;
}

void printResult(double x,double y,char op)
{
	if (op == '+')
        std::cout << x << " + " << y << " is " << x + y << '\n';
    else if (op == '-')
        std::cout << x << " - " << y << " is " << x - y << '\n';
    else if (op == '*')
        std::cout << x << " * " << y << " is " << x * y << '\n';
    else if (op == '/')
        std::cout << x << " / " << y << " is " << x / y << '\n';
}
		
int main()
{
	double x=getDouble();
	double y=getDouble();

	char op = getOperator();

	printResult(x, y, op);

	return 0;
}