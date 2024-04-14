#include<iostream>
using namespace std;
int main()
{
    int A=20, B=30, C=23;
    int max_number = (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C);
    cout << "Maximum number is: " << max_number << endl;
    return 0;
}
