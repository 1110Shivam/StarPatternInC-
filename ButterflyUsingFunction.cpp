#include<iostream>
using namespace std;
int disp(int);

int disp(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for( j=1;j<=i;j++){
            cout<<"* ";
        }
        int space=2*n-2*i;
        for(j=1;j<=space;j++){
            cout<<"  ";
        }

        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        int space=2*n-2*i;
        for(j=1;j<=space;j++){
            cout<<"  ";
        }

        for(j=1;j<=i;j++){
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