#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the n:";
    cin >> n; // ye line discuss
    for (int i = 1; i <= n; ++i)
    { // Line
        cout << i << " ";
        int m = 5; // ye star
        for (int j = 1; j <= m; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}