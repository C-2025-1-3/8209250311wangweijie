#include "mytemperature.h"

double celsius_to_fah(double cels)
{
	cels = cels * 9.0 / 5.0 + 32.0;
	return cels;
}

double fahrenheit_to_cels(double fahr)
{
	fahr = (fahr - 32.0) * 5.0 / 9.0;
	return fahr;
}