// Monkey_Problems.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool monkey_trouble(bool a_smile, bool b_smile) {

	if (a_smile == true and b_smile == true) {
		return true;
	}
	else if (a_smile == true & b_smile == false) {
		return false;
	}
	else if (a_smile == false & b_smile == true) {
		return false;
	}
	else if (a_smile == false & b_smile == false) {
		return true;
	}
}

int main()
{
	cout << monkey_trouble (false,true) << endl;
	


  
}

