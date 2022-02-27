#include<iostream>
using namespace std;
int disp(int);
int disp(int n){
        int i,j,k,m=n;
        for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            cout<<" ";
        }
        for(k=1;k<=m;k++){
            if(i==1||k==1||k==m)
                cout<<"*";
            else
                cout<<" ";
        }
        m--;
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