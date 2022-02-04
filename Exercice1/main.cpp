#include "Vector.h"
#include "main.h"


int main(int argc, char** argv) {

	Vector v1(10);
	Vector v2 = v1;

	for (size_t i = 0; i < 10; i++)
	{	
		v1.setElement(i, i);
	}
	v2.setElement(3,3.14);
	return 0;
}