 #include<iostream>
using namespace std;

int main(){
    int n,m=1,i,j,k;
    cout<<"Enter the number of rows = ";
    cin>>n;
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