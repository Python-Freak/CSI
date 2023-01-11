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

char lower(char c)
{
    if (c >= 'A' and c <= 'Z')
    {
        return c - 'A' + 'a';
    }
    return c;
}

int main(int args, char *argc[])
{
    // CODE HERE
    string correct = "yes";
    int cases;
    cin >> cases;
    while (cases--)
    {
        string s;
        cin >> s;
        bool isYes = true;
        for (int i = 0; i < 3; i++)
        {

            if (lower(s.at(i)) != correct[i])
            {
                isYes = false;
                break;
            }
        }
        if (isYes)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
};