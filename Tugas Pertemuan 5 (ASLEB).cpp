#include<iostream>
using namespace std;

int gaji_pokok = 7500;
int uang_makan = 10000;
int uang_transport = 13000;

int pokok (int jam){
     return gaji_pokok * jam;
}

int lembur (int jam){
    if(jam > 8){
        return 1.5 * gaji_pokok;
    } else {
        return 0;
    }
}

int makan (int jam){
    if(jam >= 9){
        return uang_makan;
    } else {
        return 0;
    }
}

int transport (int jam){
    if(jam >= 10){
        return uang_transport;
    } else {
        return 0;
    }
}

int main(){
    int NIP, jam;
    string nama;

    cout<<"Program menghitung gaji harian PT.XYZ"<<endl;
    cout<<"====================================="<<endl;

    cout<<"NIP              : ";
    cin>>NIP;
    cout<<"Nama             : ";
    cin.ignore();
    getline(cin, nama);
    cout<<"Jumlah jam kerja : ";
    cin>>jam;
    cout<<endl;

    cout << "=== Rincian Gaji Harian ===" << endl;
    cout<<"NIP              : "<<NIP<<endl;
    cout<<"Nama             : "<<nama<<endl;
    cout<<"Gaji Pokok       : Rp. "<<pokok(jam)<<endl;
    cout<<"Lembur           : Rp. "<<lembur(jam)<<endl;
    cout<<"Uang Makan       : Rp. "<<makan(jam)<<endl;
    cout<<"Transport        : Rp. "<<transport(jam)<<endl;

    return 0;
}
