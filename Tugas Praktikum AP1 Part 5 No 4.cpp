#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int i = 0, n;
	double Fo = 1;
	
	cout << "                                             Program menghitung faktorial \n";
	cout << "                                                Mau berapa faktorial? = ";
	cin >> n;

		cout << "                                                " << i << "! = " << Fo << endl;
		++i;
		for (i; i <= n; i++)
		{
			Fo = i * Fo;
			cout << "                                                " << i << "! = " << i << " x " << i - 1 << "! = " << Fo << endl;
		}
}