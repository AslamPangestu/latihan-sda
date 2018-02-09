#include <iostream>
using namespace std;

int main(){
    float matrixA[2][2];
    float det,invers;
    //input matrik
    for (int x = 0;x<2;x++){          
        for (int y =0;y<2;y++){ 
            cout <<"masukan nilai matrik pertama baris ke-"<<(x+1)<<" kolom ke-"<<(y+1)<<" : "; 
            cin>>matrixA[x][y]; 
        } 
    } 
    cout<<endl;

    //output matrik
    cout<<"Matrik Pertama :"<<endl; 
    for (int x = 0;x<2;x++){ 
        for (int y =0;y<2;y++){ 
            cout <<matrixA[x][y]<<"   "; 
        } 
        cout<<endl; 
    } 
    cout<<endl;

    det = matrixA[0][0]*matrixA[1][1] - matrixA[0][1]*matrixA[1][0];
    cout << "Nilai determinan : "<< det;

    for (int x = 0;x<2;x++){ 
        for (int y =0;y<2;y++){
            if(x == y){
            matrixA[x][y] = matrixA[x][y]/det; 

            }else if(x != y){
            matrixA[x][y] = -1*(matrixA[x][y]/det); 

            } 
        } 
        cout<<endl; 
    }     

        //output matrik
    cout<<"Matrik Inversny :"<<endl; 
    for (int x = 0;x<2;x++){ 
        for (int y =0;y<2;y++){ 
            cout <<matrixA[x][y]<<"   "; 
        } 
        cout<<endl; 
    } 
    cout<<endl;
}