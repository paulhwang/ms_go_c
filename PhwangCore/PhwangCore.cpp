// PhwangCore.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "PhwangRootClass.h"
#include "PhwangPortableClass.h"

int main()
{
	PhwangRootClass *root = new PhwangRootClass();

	int i = 0;
	while (true) {
		i++;
		printf("hello %d\n", i);
		root->thePortableObject->sleep(1000);
	}
    return 0;
}



