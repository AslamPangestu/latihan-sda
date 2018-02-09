#include<iostream>
#include<string.h>
using namespace std;

void balik(char,char);

int main(){
    char string[100];

    cout<<"Masukkan Input : ";
    cin>>input;
    cout<<"Hasil pembalikan : "<<balik(input,output);
}

void balik(char input){
    int counter;
    counter = strlen(input)-1;
    while(counter >= 0){
        cout<<input[counter];
    }
    strlwr(input);
    strcpy(output,input);
    strrev(output);
    cout<<output;
}
