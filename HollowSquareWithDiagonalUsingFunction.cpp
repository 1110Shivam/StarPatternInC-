#include<iostream>
using namespace std;
int disp(int);

int disp(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
         if(i==1||i==n||j==1||j==n-i+1||i==j||j==n)
            cout<<"* ";
         else
            cout<<"  ";
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