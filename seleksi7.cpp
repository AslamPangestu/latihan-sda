#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Masukkan nilai a : ";cin>>a;
    cout<<"Masukkan nilai b : ";cin>>b;
    cout<<"Masukkan nilai c : ";cin>>c;
    if(a > b){
        if(a > c){
            cout<<a;
            if(b > c){
                cout<<b;
                cout<<c;
            }else{
                cout<<c;
                cout<<b;
            }
        }else{
            cout<<c;
            if(a > b){
                cout<<a;
                cout<<b;
            }else{
                cout<<b;
                cout<<a;
            }
        }
    }else{
        if(b > c){
            cout<<b;
            if(a > c){
                cout<<a;
                cout<<c;
            }else{
                cout<<c;
                cout<<a;
            }
        }else{
            cout<<c;
            if(a > b){
                cout<<a;
                cout<<b;
            }else{
                cout<<b;
                cout<<a;
            }
        }
    }
}