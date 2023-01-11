#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(int args, char *argc[])
{
    // CODE HERE
    int childern;
    cin >> childern;
    int throws = 0;
    int current = 1;
    while (throws <= childern - 2)
    {
        current += throws + 1;
        if (current > childern)
        {
            current = current % childern;
        }
        cout << current << " ";
        throws++;
    }
    cout << endl;
    return 0;
};