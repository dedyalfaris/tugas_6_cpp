#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Inputkan Nilai x : ";
    cin>>x;
    cout<<"Inputkan Nilai z : ";
    cin>>z;
    if(x>=z){
        y=x+z;
        cout<<"Hasil : "<<y<<endl;
    }else{y=x-z;
        cout<<"Hasil : "<<y<<endl;
    }
}