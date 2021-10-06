#include <iostream>
#include <cmath>

using namespace std;
//NM Lab2 - 02.10.2021
//Visual studio 2019

float g(float x) {
	return 1. / 3 * cos(x);
}

void iterativeMethod() {
	float eps = pow(10, -7);
	float x0 = 0, x1 = 0;
	int	counter = 0;
	do {
		x1 = x0;
		x0 = g(x0);
		counter++;
	} while (abs(x1 - x0) > eps);
	cout << "Iterative Method: " << endl;
	cout << "Counter: " << counter << "| X = " << x0 << endl;
}

float f(float x) {
	return (3 * x) + sin(x) - exp(x);
}
float fp(float x) {
	return 3 + cos(x) - exp(x);
}

float newtonsMethod() {
	float x0 = 0, x1 = 0;
	int counter = 0;
	float eps = pow(10, -7);
	do {
		x1 = x0;
		x0 = x1 - (f(x1) / fp(x1));
		counter++;
	} while (abs(x1 - x0) > eps);
	cout << "Newton's Method: " << endl;
	cout << "Counter: " << counter << "| X = " << x0 << endl;
	return x0;
}

int main() {
	cout.precision(10);
	iterativeMethod();
	newtonsMethod();
}
