#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

#define loop(i, n) for (int i = 0; i < n; i++)
#define lld long long int
#define arr(name, n) int *name = (int *)malloc(n * sizeof(int));
#define mod 1e9 + 7
#define flash                          \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);

lld gcd(lld a, lld b)
{
    if (a == 0)
    {
        return b;
    }
    return gcd(b % a, a);
}

int main(int args, char *argc[])
{
    // CODE HERE
    flash;
    arr(arr, 101);
    int N;
    cin >> N;
    for (int i = 1; i <= 101; i++)
    {
        arr[i] = 0;
    }
    for (int i = 1; i <= N; i++)
    {
        int elem;
        cin >> elem;
        arr[elem]++;
    }
    int max = INT16_MIN;
    for (int i = 1; i <= 101; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << endl;
    return 0;
};