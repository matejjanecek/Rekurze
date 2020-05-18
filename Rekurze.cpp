#include <stdio.h>

int faktorial(int); /*Definice funkce*/

int main() /*Tělo programu*/
{
	int x, y;
	printf("Vlozte parametr: ");
	scanf_s("%i", &x);
    faktorial(x);
	printf("Faktrorial je: %i", faktorial(x));
	return 0;
}

int faktorial(int a) /*Tělo funkce faktoriál*/
{
	int nic = 1;

	while (a > 1)
	{
		nic = nic * a;
		a--;
	}

	return nic;
}

