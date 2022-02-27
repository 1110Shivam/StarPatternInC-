#include<iostream>
using namespace std;

class StarPattern{
    int n,i,j;
    public:

    int disp(){
        cout<<"Enter the number of rows = ";
        cin>>n;
        
        for(i=n;i>=1;i--){
            for(j=1;j<=i;j++){
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