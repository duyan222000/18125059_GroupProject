#include "Game.h"

int main()
{
	CVehicle *CC1 = new CCar;
	thread first(Moving,CC1);
	int c;
	do {
		c = getchar();
		putchar(c);
	} while (c != '.');
	system("pause");
	return 0;
}