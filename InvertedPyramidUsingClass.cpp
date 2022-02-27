#include<iostream>
using namespace std;

class StarPattern{
    int n,m=1,i,j,k;
    public:

    int disp(){
        cout<<"Enter the number of rows = ";
        cin>>n;
        
        for(i=n;i>=1;i--){
            for(j=1;j<m;j++){
                cout<<" ";
            }
            for(k=1;k<=2*i-1;k++){
                cout<<"*";
            }
            m++;
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