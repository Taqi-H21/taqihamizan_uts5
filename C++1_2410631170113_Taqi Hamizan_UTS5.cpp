#include<iostream>
using namespace std;
int main()
{
float weight, height, imt;
cout << "Masukan Berat Badan (kg) : ";
cin >> weight;
cout << "Masukan Tinggi Badan (cm) : ";
cin >> height;
cout << "IMT = " << (weight / (height / 100 * height / 100));
imt=(weight / (height / 100 * height / 100));

if (imt>=40)
{
    cout << " (Sangat Gemuk)" << endl;
}
else if (imt>=30)
{
    cout << " (Gemuk)" << endl;
}
else if (imt>=25)
{
    cout << " (Berat Badan Lebih)" << endl;
}
else if (imt>=18.5)
{
    cout << " (Berat Badan Ideal)" << endl;
}
else
{
    cout << " (Berat Badan Kurang)" << endl;
}

return 0;
}
