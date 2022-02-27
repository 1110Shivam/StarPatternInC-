#include<iostream>
using namespace std;

class StarPattern{
    int n,i,j;       
    public:

    int disp(){
        cout<<"Enter the number of rows = ";
        cin>>n;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<"* ";
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