#include <iostream>

using namespace std;
int N=0,x=0,y=1,z=1,par1=0,par2=0;
int main()
{
    cout << "Ingrese un numero: ";
    cin>>N;
    //cout<<"1 "<<endl;
    for(int i = 1;i<N;i++){
        z=x+y;
        cout<<z<<" "<<endl;
        x = y;
        y = z;
        if(par1+par2==N){
            cout<<"la suma es = "<<N<<endl;
            break;
        }
        if(z%2==0){
            if(par1!=0){
                par2 = par2 + y;
            }
            else{
            par1 = par1 + y;
            }
        }
    }
    return 0;
}
