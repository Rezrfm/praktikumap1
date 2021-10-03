#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int b1, b2, b3, max;
    char a1[30], a2[30], a3[30];
    cout << "Program membandingkan berat badan 3 orang anak \n";
    cout << "Nama anak pertama = ";
    cin >> a1;
    cout << "Masukkan berat badannya(Kg) = ";
    cin >> b1;
    cout << "Nama anak kedua = ";
    cin >> a2;
    cout << "Masukkan berat badannya(Kg) = ";
    cin >> b2;
    cout << "Nama anak ketiga = ";
    cin >> a3;
    cout << "Masukkan berat badannya(Kg) = ";
    cin >> b3;

    if (b1 > b2)
    {
        if (b1 > b3) max = b1;
        else max = b1;
    }
    else
    {
        if (b2 > b3) max = b2;
        else max = b3;
    }
    cout << "Berat badan terbesar dari ketiga anak tersebut adalah = " << max << " kg" << endl;

    cin.get();
    return 0;
}
