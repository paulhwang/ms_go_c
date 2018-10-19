#include "stdafx.h"

#ifdef WIN32
#include <windows.h>
#else
#endif

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


