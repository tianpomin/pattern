#ifndef SINGLETON_H
#define SINGLETON_H
#include "stdafx.h"
class Singleton
{
public:
	static Singleton* Getinstance();
private:
	Singleton();
	static Singleton* instance;
};

#endif