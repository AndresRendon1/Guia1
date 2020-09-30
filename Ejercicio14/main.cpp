#include <iostream>

using namespace std;
int fil1=0;
int fil2=51;
int main()
{
    while(fil1<50){
        fil1+=1;
        fil2-=1;
        cout<<fil1,cout<<"   ",cout<<fil2,cout<<endl;
    }
    return 0;
}
