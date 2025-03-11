#include <IOstream>

using namespace std;

float fungsiHitungRerata(float x, float y){
    return (x + y) / 2;
}

string fungsiCekStatusKelulusan(float a){
    if(a >=70){
        return "Lulus";
    }
    else{
        return "Gagal";
    }
}

int main(){
    //numeric nNilai1, nNIlai2, nRerata
    float nNilai1,nNilai2,Rerata;
    //Display "masukkan nNilai1"
    cout << "masukkan nNilai1 = ";
    //Accept nNilai1
    cin >> nNilai1; 
    //Display "masukkan nNilai2 = "
    cout << "masukkan Nilai2 = ";
    //Accept nNilai2
    cin >> nNilai2;
    //Display "Status Kelulusan = + Status
    cout << "status kelulusan = " << fungsiCekStatusKelulusan(fungsiHitungRerata(nNilai1, nNilai2));
}