#include "stdafx.h"
#include <thread>
#include <chrono>
#include <windows.h>
#include "PhwangPortableClass.h"


PhwangPortableClass::PhwangPortableClass()
{
}


PhwangPortableClass::~PhwangPortableClass()
{
}

void PhwangPortableClass::sleep (int var)
{
	Sleep(var);
}


