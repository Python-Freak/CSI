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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string sub = s.substr(0, 3);
    int count = sub == "xxx" ? 1 : 0;
    for (int i = 3; i < n; i++)
    {
        sub[0] = sub[1];
        sub[1] = sub[2];
        sub[2] = s.at(i);
        if (sub == "xxx")
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
};