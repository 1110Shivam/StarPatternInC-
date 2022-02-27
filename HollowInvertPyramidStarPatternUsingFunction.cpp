#include<iostream>
using namespace std;
int disp(int);
int disp(int n){
        int m=1,i,j,k;
        for(i=n;i>=1;i--){
        for(j=1;j<m;j++){
            cout<<" ";
        }
        for(k=1;k<=2*i-1;k++){
            if(k==1||k==2*i-1||i==n)
                cout<<"*";
            else
                cout<<" ";
        }
        m++;
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