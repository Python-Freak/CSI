#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(int args, char *argc[])
{
    // CODE HERE
    // int x;
    // cin >> x;
    // if (x % 4 == 0)
    // {
    //     // 4n type
    //     cout << x / 4 << " " << x / 4 << " " << x / 4 << " " << x / 4 << endl;
    // }
    // else if (x % 4 == 1)
    // {
    //     // 4n+1 type
    //     cout << x / 4 << " " << x / 4 + 2 << " " << x / 4 << " " << x / 4 - 1 << endl;
    // }
    // else if (x % 4 == 2)
    // {
    //     // 4n+2 type
    //     cout << x / 4 + 1 << " " << x / 4 + 3 << " " << x / 4 - 1 << " " << x / 4 - 1 << endl;
    // }
    // else if (x % 4 == 3)
    // {
    //     // 4n+3 type
    //     cout << x / 4 + 1 << " " << x / 4 + 1 << " " << x / 4 + 1 << " " << x / 4 << endl;
    // }
    int cases;
    cin >> cases;
    while (cases--)
    {
        int x;
        cin >> x;
        cout << x - 3 << " " << 1 << " " << 1 << " " << 1 << endl;
    }

    return 0;
};

/*

*/