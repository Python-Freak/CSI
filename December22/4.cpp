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
    int *order = (int *)malloc(n * sizeof(int));
    int untreated = 0;
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        order[i] = elem;
    }
    int police = 0;
    int i = 0;
    while (i < n)
    {
        if (order[i] + police < 0)
        {

            untreated++;
        }
        else
        {
            police += order[i];
        }
        i++;
    }

    cout << untreated << endl;

    return 0;
};