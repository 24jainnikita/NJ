#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,i,number;
    cout<<"enter the number of elements: ";
    cin>>number;
    cout<<a<<endl<<b<<endl;
    for(i=2;i<number;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    return 0;
}
