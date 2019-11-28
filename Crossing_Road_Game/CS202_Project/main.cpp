#include "Object.h"

void Typing()
{
	int c;
	do {
		c = getchar();
		putchar(c);
	} while (c != '.');
}

int main()
{
	thread first(Typing);
	CVehicle *CC1 = new CCar;
	CC1->Move();
	return 0;
}