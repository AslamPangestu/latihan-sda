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
        for (int i=1;i<=n ;i++){
            if(i%2==1){
                cout << i;
                hasil += i;
                if(i < n){
                    cout<<" + ";
                }
            }
        }
        cout<<" = "<<hasil<<endl;
    }
}