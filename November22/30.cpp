#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(int args, char *argc[])
{
    // CODE HERE
    int n;
    cin >> n;
    if (n % 3 == 0)
    {
        // 3n
        cout << n - 2 << " " << 1 << " " << 1 << endl;
    }
    else if (n % 3 == 1)
    {
        // 3n+1
        cout << n - 3 << " " << 2 << " " << 1 << endl;
    }
    else
    {
        // 3n+2
        cout << n - 4 << " " << 2 << " " << 2 << endl;
    }
    return 0;
};