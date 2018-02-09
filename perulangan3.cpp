#include <iostream>
using namespace std;

int main(){
    int n, hasil=20;
    cout<<"Masukkan panjang deret : ";
    cin >> n;
    for(int i = 0;i<n;i++){
        cout<<hasil<<" ";
        hasil = hasil - (i + 1);
    }
}