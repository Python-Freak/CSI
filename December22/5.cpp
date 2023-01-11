#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

#define loop(i, n) for (int i = 0; i < n; i++)
#define lld long long int
#define arr(n) int *arr = (int *)malloc(n * sizeof(int));

int main(int args, char *argc[])
{
    // CODE HERE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int N;
    cin >> N;
    int max;
    int min;
    int amazing = 0;
    loop(i, N)
    {
        int elem;
        cin >> elem;
        if (i == 0)
        {
            max = elem;
            min = elem;
        }
        else
        {
            if (elem > max)
            {
                max = elem;
                amazing++;
            }
            if (elem < min)
            {
                min = elem;
                amazing++;
            }
        }
    }
    cout << amazing << endl;

    return 0;
};