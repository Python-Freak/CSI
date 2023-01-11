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
        string s;
        cin >> s;
        string word;
        cin >> word;
        long long time = 0;
        arr(hash, 26);
        for (int i = 0; i < 26; i++)
        {
            hash[s.at(i) - 'a'] = i + 1;
        }
        for (int i = 0; i < word.length() - 1; i++)
        {
            time += abs(hash[word.at(i) - 'a'] - hash[word.at(i + 1) - 'a']);
        }
        cout << time << endl;
    }

    return 0;
};