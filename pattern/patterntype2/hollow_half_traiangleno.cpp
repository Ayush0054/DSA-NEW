#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1  ||i == n   || j == i)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    } /////
    return 0;
}