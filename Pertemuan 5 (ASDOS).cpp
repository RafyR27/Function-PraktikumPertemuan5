#include <iostream>
using namespace std;

int jumlah (int n){
    if(n<=0){
        return 0;
    } else {
        return (n-1);
    }
}

int main (){
    int angka;

    cout<<"Masukkan sebuah angka positif: ";
    cin>>angka;

    if (angka<=0){
        cout<<"Masukkan angka positif.\n";
    } else {
        int hasil=jumlah(angka);
        cout<<"Jumlah angka dari 1 hingga "<<angka<<" adalah: "<<hasil<<endl;
    }
}
