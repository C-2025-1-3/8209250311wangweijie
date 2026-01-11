#include"mytemperature.h"
#include <iostream>
using namespace std;
int main() {
	double cel = 40.0,fah=120.0;
	cout << "Celsius" << '\t' << "Fahrenheit" << '\t' << "|" << '\t' << "Fahrenheit" << '\t' << "Celsius" << endl;
	for (cel,fah; cel > 30; cel--, fah -= 10)
	{
		cout << cel << '\t' << celsius_to_fah(cel) << '\t' << '|' << '\t' << fah << '\t' << fahrenheit_to_cels(fah) << endl;
	}
	return 0;
}
	