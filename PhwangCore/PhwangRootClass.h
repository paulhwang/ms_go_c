#pragma once

#include "PhwangPortableClass.h"
#include "PhwangUtilClass.h"

class PhwangRootClass
{
public:
	PhwangRootClass();
	~PhwangRootClass();

	PhwangPortableClass *thePortableObject;
	PhwangUtilClass *theUtilObject;
};
