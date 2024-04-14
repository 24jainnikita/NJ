#include<iostream>
using namespace std;
int main()
{
    int n,f=1;
    cout<<"enter a number: ";
    cin>>n;
    while(n>0)
    {
        f=f*n;
        n--;
    }
    cout<<"factorial= "<<f;
    return 0;
}
