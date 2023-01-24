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

lld pow__(lld a, lld b)
{
    lld ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % ((lld)mod);
        a = (a * a) % ((lld)mod);
        b >>= 1;
    }
    return ans;
}

string result(int n)
{
    if (n > 45)
    {
        return "-1";
    }
    string res;
    int digit = 9;
    while (n > digit)
    {
        res = char('0' + digit) + res;
        n -= digit;
        digit -= 1;
    }
    if (n > 0)
    {
        res = char('0' + n) + res;
    }
    return res;
}

int main(int args, char *argc[])
{
    // CODE HERE
    int cases;
    cin >> cases;
    while (cases--)
    {
        int elem;
        cin >> elem;
        cout << result(elem) << endl;
    }

    return 0;
};