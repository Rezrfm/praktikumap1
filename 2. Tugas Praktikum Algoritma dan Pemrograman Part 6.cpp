#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	char Array[15] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O' };
	int i, a;
	int c = 0;
	int d = 2;
	int f = 0;
	int e = 4;
	int batas = 14;

	cout << "A. Tampilan Array Pertama" << endl;
	cout << endl;

	for (i = 0; i <= batas; i++)
	{
		cout << Array[i] << " ";
		if (i == e)
		{
			cout << endl;
			e += 5;
		}
	}
	
	cout << endl;
	cout << "B. Tampilan Array Kedua" << endl;
	cout << endl;

	for (i = 0; i <= batas; i++)
	{
		for (a = 0; a <= 2 * (batas - i); a++)
		{
			cout << " ";
		}
		for (f;f <= c;)
		{
			cout << " " << Array[f];
			++f;
			if (f == 15)
			{
				break;
			}
		}
		if (f == 15)
		{
			break;
		}
		cout << endl;
		c += d;
		++d;
	}
	cout << endl;
	cout << endl;
	cout << "C. Tampilkan semua huruf vokal" << endl;
	cout << endl;
	for (i = 0; i <= batas; i++)
	{
		if (Array[i] == 'A')
		{
			cout << Array[i] << " ";
		}
		if (Array[i] == 'I')
		{
			cout << Array[i] << " ";
		}
		if (Array[i] == 'U')
		{
			cout << Array[i] << " ";
		}
		if (Array[i] == 'E')
		{
			cout << Array[i] << " ";
		}
		if (Array[i] == 'O')
		{
			cout << Array[i] << " ";
		}
	}

	cout << endl;
	cout << endl;
	cout << "D. Tampilkan huruf konsonan" << endl;
	cout << endl;

	for (i = 0; i <= batas; i++)
	{
		if (Array[i] == 'A')
		{
			continue;
		}
		if (Array[i] == 'I')
		{
			continue;
		}
		if (Array[i] == 'U')
		{
			continue;
		}
		if (Array[i] == 'E')
		{
			continue;
		}
		if (Array[i] == 'O')
		{
			continue;
		}
		cout << Array[i] << " ";
	}
	cout << endl;
	cout << endl;
	cout << "E. Hitung berapa kemunculan setiap huruf dalam Array" << endl;
	cout << endl;
	int tota = 0;
	int totb = 0;
	int totc = 0;
	int totd = 0;
	int tote = 0;
	int totf = 0;
	int totg = 0;
	int toth = 0;
	int toti = 0;
	int totj = 0;
	int totk = 0;
	int totl = 0;
	int totm = 0;
	int totn = 0;
	int toto = 0;

	for (i = 0; i <= batas; i++)
	{
		if (Array[i] == 'A')
		{
			++tota;
			cout << "A : " << tota << endl;
		}
		if (Array[i] == 'B')
		{
			++totb;
			cout << "B : " << totb << endl;
		}
		if (Array[i] == 'C')
		{
			++totc;
			cout << "C : " << totc << endl;
		}
		if (Array[i] == 'D')
		{
			++totd;
			cout << "D : " << totd << endl;
		}
		if (Array[i] == 'E')
		{
			++tote;
			cout << "E : " << tote << endl;
		}
		if (Array[i] == 'F')
		{
			++totf;
			cout << "F : " << totf << endl;
		}
		if (Array[i] == 'G')
		{
			++totg;
			cout << "G : " << totg<< endl;
		}
		if (Array[i] == 'H')
		{
			++toth;
			cout << "H : " << toth << endl;
		}
		if (Array[i] == 'I')
		{
			++toti;
			cout << "I : " << toti << endl;
		}
		if (Array[i] == 'J')
		{
			++totj;
			cout << "J : " << totj << endl;
		}
		if (Array[i] == 'K')
		{
			++totk;
			cout << "K : " << totk<< endl;
		}
		if (Array[i] == 'L')
		{
			++totl;
			cout << "L : " << totl << endl;
		}
		if (Array[i] == 'M')
		{
			++totm;
			cout << "M : " << totm << endl;
		}
		if (Array[i] == 'N')
		{
			++totn;
			cout << "N : " << totn << endl;
		}
		if (Array[i] == 'O')
		{
			++toto;
			cout << "O : " << toto << endl;
		}
	}
}
