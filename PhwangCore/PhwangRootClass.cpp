#include "stdafx.h"
#include "PhwangRootClass.h"
#include "PhwangPortableClass.h"


PhwangRootClass::PhwangRootClass (void)
{
	this->thePortableObject = new PhwangPortableClass;
}

PhwangRootClass::~PhwangRootClass (void)
{
}
