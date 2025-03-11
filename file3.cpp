#include <iostream>

using namespace std;
float fungsihitungLuasBerparameter(float a, float b){
    return a * b;
}

int main()
{//begin
    float Panjang, Lebar;
cout << "Masukkan panjangnya";
cin >> Panjang;
cout << "Masukkan lebarnya = ";
cin >> Lebar;
cout << "Luas persegi panjang = " << fungsihitungLuasBerparameter(Panjang, Lebar);
}//end