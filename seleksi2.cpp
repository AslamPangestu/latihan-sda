#include <iostream>
using namespace std;

int main(){
    int n;
    int upah;
    int sisa;

    cout<<"Masukkan jumlah jam kerja : ";
    cin>>n;
    
    if(n > 40){
        sisa = (n - 40) * 2000;
        upah = 40 * 1000 + sisa;
    }else if(n < 40){
        sisa = (40 - n) * 500;
        upah = n * 1000 - sisa;
    }
    cout<<"Nilai upah : "<<upah<<endl;
}