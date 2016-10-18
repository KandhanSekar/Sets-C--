// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<set>
#include<iostream>
using namespace std;

int main()
{
	set<int>a;
	set<int> ::iterator it;
	int myints[] = { 1,2,3,4 };
	a.insert(10);
	a.insert(myints,myints+3);
	
	a.insert( 7);

	for (it = a.begin(); it != a.end(); it++)
	{
		cout << (*it)<<",";
	}
    return 0;
}

