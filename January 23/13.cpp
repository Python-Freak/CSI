#include <bits/stdc++.h>

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
    int n;
    cin >> n;
    char *s = (char *)malloc(1010 * sizeof(char));
    int i;
    for (i = 0; i < n; i++)
    {
        s[i] = 'o';
    }
    s[i] = '\0';
    int x = 1, y = 1;
    while (y <= n)
    {
        s[y - 1] = 'O';
        int tmp = y;
        y = y + x;
        x = tmp;
    }

    cout << s << endl;
    return 0;
};