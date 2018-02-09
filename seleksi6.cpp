#include<iostream>
using namespace std;

int main(){
    int n;
    int hasil = 0;
    cout << "Masukan n = ";
    cin >> n;
    if(n<=0){
        cout<<"Maaf,inputan anda kurang dari 0";
    }else{
        cout << "Deret bilangan ganjil "<<n<<" :\n";
        for (int i=1;i<=n ;i+=2){
            cout << i;
            for(int j=1;j<=n-1;j++);{
                cout<<" + ";
            }
            hasil += i;
        }
        cout<<"Hasil perhitungan : "<<hasil<<endl;
    }
}