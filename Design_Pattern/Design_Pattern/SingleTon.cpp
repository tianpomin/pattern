#include "stdafx.h"
#include "SingleTon.h"
#include <iostream>
Singleton* Singleton::instance = 0;
Singleton *Singleton::Getinstance()
{
	if(instance == NULL)
		instance = new Singleton();
	return instance;
}
Singleton::Singleton()
{
	std::cout << "Singleton..."<< std::endl;
}