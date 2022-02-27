#include<iostream>
using namespace std;
int disp(int);
int disp(int n){
        int i,j;
        for(i=n;i>=1;i--){
            for(j=1;j<=i;j++){
                cout<<"*";
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