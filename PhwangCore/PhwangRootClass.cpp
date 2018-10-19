#include "stdafx.h"
#include "PhwangRootClass.h"
#include "PhwangPortableClass.h"
#include "PhwangUtilClass.h"

PhwangRootClass::PhwangRootClass (void)
{
	this->thePortableObject = new PhwangPortableClass();
	this->theUtilObject = new PhwangUtilClass();
}

PhwangRootClass::~PhwangRootClass (void)
{
}
