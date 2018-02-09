#include<iostream>
using namespace std;

double ip(char,int,int);
int main(){

}
double ip(char predikat,int sks, int n){
    double nilai;
    switch(predikat){
        case A:
            nilai = 4.00;
            break;
        case B:
            nilai = 3.00;
            break;
        case C:
            nilai = 2.00;
            break;
        case D:
            nilai = 1.00;
            break;
        case E:
            nilai = 0.00;
            break;
        default:
            cout<<"Maaf, inputan salah";
            break;
    }
}