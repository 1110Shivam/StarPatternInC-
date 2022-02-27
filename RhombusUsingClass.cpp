#include<iostream>
using namespace std;

class StarPattern{
    int n,i,j,k;
    public:

    int disp(){
        cout<<"Enter the number of rows = ";
        cin>>n;
        for(i=n;i>=1;i--){
            for(j=1;j<=i-1;j++){
                cout<<" ";
            }
            for(k=1;k<=n;k++){
                cout<<"*";
            }
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