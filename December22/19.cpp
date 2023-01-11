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
    int cases;
    cin >> cases;
    while (cases--)
    {
        int N;
        cin >> N;
        arr(a, N);
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        int min = a[0];
        for (int i = 0; i < N; i++)
        {
            if (a[i] < min)
            {
                min = a[i];
            }
        }
        long long total = 0;
        for (int i = 0; i < N; i++)
        {
            total += (a[i] - min);
        }
        cout << total << endl;
    }

    return 0;
};