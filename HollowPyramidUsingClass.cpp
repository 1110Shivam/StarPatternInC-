#include<iostream>
using namespace std;

class StarPattern{
    int n,i,j,k,m;
    public:

    int disp(){
        cout<<"Enter the number of rows = ";
        cin>>n;
        int m = n;
        for(i=1;i<=n;i++){
            for(j=1;j<=m-1;j++){
                cout<<" ";
            }
            for(k=1;k<=2*i-1;k++){
                if(k==1 || k==2*i-1 || i==n)  
                    cout<<"*";
                else  
                    cout<<" ";
            }
            m--;
            cout<<endl;
        }
        return 0;
    }
};
int main(){
    StarPattern obj;
    obj.disp();
    return 0;
}