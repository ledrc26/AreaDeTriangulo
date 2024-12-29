#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include<stdio.h>
#include<conio.h>

float leerFlotante(const char *msj)
{
	float x;
	printf("%s", msj);
	fflush(stdin);
	scanf("%f", &x);
	return x;
}