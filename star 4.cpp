#include<iostream>
using namespace std;

int main() {
    int i, j, k, l;
    cout << "Enter the number of rows: ";
    cin >> k;
    l = k - 1;
    for (i = 1; i <= k; i++) {
        for (j = 1; j <= l; j++) {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
        l--;
    }
    return 0;
}
