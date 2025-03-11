#include <iostream>

using namespace std;

float
Panjang,Lebar,Luas;
void prosedurHitungLuas(){
    Luas = Panjang * Lebar;
}

void prosedurInputData(){
    cout << "Masukkan Panjangnya =";
    cin >> Panjang;
    cout << "Masukkkan Lebarnya =";
    cin >> Lebar;
}

void prosedurOutputData(){
    cout << "Luas persegi panjang = " << Luas;
}

int main (){
    prosedurInputData();
    prosedurHitungLuas();
    prosedurOutputData();
}