#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Masukan n = ";
    cin >> n;
    cout << "Deret bilangan genap "<<n<<" :\n";
    for (int i=0;i<n ;i+=2){
        cout << i << " ";
    }
}