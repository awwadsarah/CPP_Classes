// CPP_Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "Man.h"
#include <string>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	Man dd;

	dd.ChangeName(L"eeeee");

	cout << "Human name is : " << dd._Name << endl;

	system("PAUSE");

	return 0;
}

