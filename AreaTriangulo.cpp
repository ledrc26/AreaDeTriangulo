#include"MiLibreria.h"

float b, h, a;

int main()
{
	b = leerFlotante("Ingresa el valor de la base del triangulo:");
	h = leerFlotante("Ingresa el valor de la altura del triangulo:");
	if (b > 0 & h > 0)
	{
		a = b * h / 2;
		printf("El area del triangulo es: %5.3f", a);
	}
	else
	{
		printf("No se pudo calcular el area");
	}
}