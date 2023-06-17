#include "Class.h"
#include <iostream>
using namespace std;
namespace Hello
{
	void Greeter::greet(string a)
	{
		cout << "Enter your name = ";
		cin >> a;
		cout << "\nHello, " << a;
	}
}