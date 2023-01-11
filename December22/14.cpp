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

void toLower(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) >= 'A' && s.at(i) <= 'Z')
        {
            cout << (char)(s.at(i) - 'A' + 'a');
        }
        else
        {
            cout << s.at(i);
        }
    }
    cout << endl;
}

void toUpper(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) >= 'a' && s.at(i) <= 'z')
        {
            cout << (char)(s.at(i) - 'a' + 'A');
        }
        else
        {
            cout << s.at(i);
        }
    }
    cout << endl;
}

int main(int args, char *argc[])
{
    // CODE HERE
    string s;
    cin >> s;
    int lower = 0, upper = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) >= 'A' and s.at(i) <= 'Z')
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }

    if (upper <= lower)
    {
        toLower(s);
    }
    else
    {
        toUpper(s);
    }

    return 0;
};