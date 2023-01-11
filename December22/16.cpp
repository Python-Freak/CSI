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

char get(int i)
{
    return 'a' + i - 1;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int i = n - 1;
    string res;
    while (i >= 0)
    {
        if (s[i] != '0')
        {
            res += get(s[i] - '0');
            i--;
        }
        else
        {
            res += get(stoi(s.substr(i - 2, 2)));
            i -= 3;
        }
    }
    for (int i = res.length() - 1; i >= 0; i--)
    {
        cout << res[i];
    }
    cout << endl;
}

int main(int args, char *argc[])
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        solve();
    }

    return 0;
};