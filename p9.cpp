#include <bits/stdc++.h>
using namespace std;

int main()
{

    int rows;
    cin >> rows;

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        int spaces = 2 * (rows - i);
        for (int j = 0; j < spaces; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        int spaces = 2 * (rows - i);
        for (int j = 0; j < spaces; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}