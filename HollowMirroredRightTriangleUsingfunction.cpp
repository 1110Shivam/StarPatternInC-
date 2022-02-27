#include<iostream>
using namespace std;
int disp(int);
int disp(int n){
        int i,j,k,m=1;
         for(i=n;i>=1;i--){
            for(j=1;j<=i-1;j++){  
                cout<<" ";
            }
            for(k=1;k<=m;k++){
                if(k==1||k==m||m==n)
                    cout<<"*";
                else
                    cout<<" ";
            }
        cout<<endl;
        m++;
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