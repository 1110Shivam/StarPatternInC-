#include<iostream>
using namespace std;
int disp(int);

int disp(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"* ";
        }
            cout<<endl;
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the number of rows = ";
    cin>>n;
    disp(n);
    return 0;
}