#include<iostream>
using namespace std;

int main (){
    int n;
    int hasil = 0;
    cout<<"Masukkan Nilai Untuk Hitung Mundur:";
    cin>>n;
    //looping dari batas decrement sampai 0
    for (int i=n ; i>=0 ; i --){
        cout<<i<<" ";
    }
    cout<<endl;
}