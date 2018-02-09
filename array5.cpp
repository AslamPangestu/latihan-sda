#include <iostream>
using namespace std;

int main(){
    int temp;
    int matrixA[2][2];
    int matrixB[2][2];
    int matrixC[2][2];

    //input matrik pertama 
    for (int x = 0;x<2;x++){          
        for (int y =0;y<2;y++){ 
            cout <<"masukan nilai matrik pertama baris ke-"<<(x+1)<<" kolom ke-"<<(y+1)<<" : "; 
            cin>>matrixA[x][y]; 
        } 
    } 
    cout<<endl;
    //input matrik kedua 
    for (int x = 0;x<2;x++){          
        for (int y =0;y<2;y++){ 
            cout <<"masukan nilai matrik pertama baris ke-"<<(x+1)<<" kolom ke-"<<(y+1)<<" : "; 
            cin>>matrixB[x][y]; 
        } 
    }

    //output matrik pertama 
    cout<<"Matrik Pertama :"<<endl; 
    for (int x = 0;x<2;x++){ 
        for (int y =0;y<2;y++){ 
            cout <<matrixA[x][y]<<"   "; 
        } 
        cout<<endl; 
    } 
    cout<<endl;

    //output matrik kedua 
    cout<<"Matrik Kedua :"<<endl; 
    for (int x = 0;x<2;x++){ 
        for (int y =0;y<2;y++){ 
            cout <<matrixB[x][y]<<"   "; 
        } 
        cout<<endl; 
    } 
    cout<<endl;

    //rumus perkalian matrik 
    for (int x = 0;x<2;x++){ 
        for (int y =0;y<2;y++){ 
            matrixC[x][y]=0; 
            for (int z =0;z<2;z++){ 
                temp=matrixA[x][z]*matrixB[z][y]; 
                matrixC[x][y]=matrixC[x][y]+temp; 
            } 
        } 
    }
    //output matrik hasil perkalian 
    cout<<endl; 
    cout<<"Matrik hasil perkalian :"<<endl; 
    for (int x = 0;x<2;x++){ 
        for (int y =0;y<2;y++){ 
            cout <<matrixC[x][y]<<"   "; 
        } 
    cout<<endl; 
    } 
}