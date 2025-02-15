#include <iostream>
using namespace std;

int main() {

	float num1 = 0;
	float num2 = 1;
	char operation;
	double result;

	cout << "Enter number 1: " << endl;
	cin >> num1;
	cout << "Enter number 2: " << endl;
	cin >> num2;
	cout << "Please choose your operation (+,-,/,*)" << endl;
	cin >> operation;

	if(operation == '+') {
		result = num1 + num2;	

		cout << result << endl;
	}
	else if (operation == '-') {
		result = num1 - num2;

		cout << result << endl;
	}
	else if (operation == '*') {
		result = num1 * num2;

		cout << result << endl;
	}
	else if (operation == '/') {
		
		if (num2 == 0) {
			cout << "Error, you cannot divide by 0." << endl;
		}	
		else {
			result = num1 / num2;

			cout << "The result is: " << result << endl;
		}
	}	
	else {
		cout << "Invalid operation please use +,-,*, or /." << endl;
	}
	 
	return 0;

}
