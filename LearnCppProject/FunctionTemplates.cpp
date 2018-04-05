#include "stdafx.h"
#include "FunctionTemplates.h"
#include <iostream>
//#include <string>
#include <sstream>

using namespace std;

template <class T, class U>
T sum(T a, U b)
{
	T result = a + b;
	cout << " _diff type_ ";
	return result;
}

template <class T>
T sum(T a, T b)
{
	T result = a - b;
	cout << " _same type_ ";
	return result;
}

FunctionTemplates::FunctionTemplates()
{
	string aa = "this is a string\n";
	cout << aa;
	int a = 20, b = 40;
	float c = 22.66, d = 55.33;
	cout << "sum of " << a << " and " << b << " is " << sum(a, b) << endl;
	cout << "sum of " << c << " and " << d << " is " << sum(c, d) << endl;
	cout << "sum of " << a << " and " << c << " is " << sum(a, c) << endl;
	cout << "sum of " << c << " and " << a << " is " << sum(c, a) << endl;
	//return 0;
}

FunctionTemplates::~FunctionTemplates()
{
	cout << "*** Resource Freed! ***" << endl;
}
