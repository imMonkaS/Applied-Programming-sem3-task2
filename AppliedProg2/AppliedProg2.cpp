#include <iostream>
#include "funcs.h"

using namespace std;

int main() {
	cout << "Enter two numbers: " << endl;
	int a, b;
	cin >> a >> b;
	cout << "Enter operation (+, -, * or /): ";
	char operation;
	cin >> operation;

	switch (operation) {
	case '+':
		cout << summary(a, b);
		break;
	case '-':
		cout << subversion(a, b);
		break;
	case '*':
		cout << multiplication(a, b);
		break;
	case '/':
		if (b == 0) cout << "Can not divide by 0";
		else cout << division(a, b);
		break;
	default:
		cout << "Wrong operator";
		break;
	}

	return 0;
}