#include<iostream>
using namespace std;
int disp(int);

int disp(int n){
        int i,j,m = n/2+1;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){  
                if(j==m||i==n||(i+j == m && j <= m)){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
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