#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float a = 1;
	float s = 0;
	float b = 0;
	for (int i = 1; i <= 1000; i++)
	{
		if (i % 2)
		{
			b += + (1 / a);
			cout << "                                   " << b << " - " << "1/" << i + 1 << endl;
		}
		else
		{
			b += - (1 / a);
			cout << "                                   " << b << " + " << "1/" << i + 1 << endl;
		}
		b = s + b;
		a++;
	}
	cout << "                                !!1/1001 tidak akan ditambahkan kedalam hitungan!! \n";
	cout << "                                 Hasil dari 1 - 1/2 + 1/3... - 1/1000 = " << b << endl;
}