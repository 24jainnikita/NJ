#include<iostream>
using namespace std;
int main()
{
    int i,j,rows;
    cout<<"enter number of rows: ";
    cin>>rows;
    cout<<"the PATTERN IS:\n\n ";
    for(i=69;i>=65;i--)
    {
        for(j=65;j<=i;j++)

        cout<<(char)j;
        cout<<"\n";
    }
    return 0;
}
