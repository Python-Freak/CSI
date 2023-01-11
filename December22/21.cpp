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

bool check__(string s, int i)
{
    if (s.at(i) == 'W' && s.at(i + 1) == 'U' && s.at(i + 2) == 'B')
    {
        return true;
    }
    return false;
}

void removeSpaces(string &str)
{

    int n = str.length();
    int i = 0, j = -1;
    bool spaceFound = false;
    while (++j < n && str[j] == ' ')
        ;
    while (j < n)
    {

        if (str[j] != ' ')
        {

            if ((str[j] == '.' || str[j] == ',' ||
                 str[j] == '?') &&
                i - 1 >= 0 &&
                str[i - 1] == ' ')
                str[i - 1] = str[j++];

            else
                str[i++] = str[j++];

            spaceFound = false;
        }

        else if (str[j++] == ' ')
        {
            if (!spaceFound)
            {
                str[i++] = ' ';
                spaceFound = true;
            }
        }
    }

    if (i <= 1)
        str.erase(str.begin() + i, str.end());
    else
        str.erase(str.begin() + i - 1, str.end());
}

int main()
{
    string s;
    int flag = 1;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (!flag)
            {
                cout << " ";
            }
            continue;
        }
        else
        {
            flag = 0;
            cout << s[i];
        }
    }
    return 0;
}
