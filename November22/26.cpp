#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(int args, char *argc[])
{
    int x;
    cin >> x;
    if (x == 2)
    {
        cout << "NO" << endl;
    }
    else if (x % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
};