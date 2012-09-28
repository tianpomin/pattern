// Design_Pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include  <iostream>
#include "Factory.h"
#include "Product.h"
#include "SingleTon.h"
#include <cstdlib>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	Factory* fac = new ConcreteFactory();
	Product* pro = fac->CreateProduct();

	Singleton *myinstance = Singleton::Getinstance();

	system("pause");
	return 0;
}

