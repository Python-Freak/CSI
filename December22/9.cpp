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
    int n, t, a = 0, b = 0, c = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (i % 3 == 1)
            a += t;
        else if (i % 3 == 2)
            b += t;
        else
            c += t;
    }

    if (a > b and a > c)
        cout << "chest" << endl;
    else if (b > a and b > c)
        cout << "biceps" << endl;
    else
        cout << "back" << endl;
    return 0;

};