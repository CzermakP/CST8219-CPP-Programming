// Week1.cpp : Defines the entry point for the application.
//

#include "Week1.h"

#define usingNamespaces 1

 //if not using this must define 'std::' before cout << AND endl


#if usingNamespace == 30
int main()
{
#pragma message ("Not using namespaces")
	std::cout << "Hello World 2." << std::endl;
	return 0;
}

#else
using namespace std;
int main()
{
#pragma message ("Using namespaces")
	cout << "Hello World 1." << endl;
	return 0;
}

#endif
//return 0;