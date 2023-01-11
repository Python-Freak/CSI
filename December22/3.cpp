#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int min(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b < c)
        {
            return b;
        }
        return c;
    }
}

int main(int args, char *argc[])
{
    // CODE HERE
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = k * l;
    int lemon = c * d;
    int salt = p;
    drink /= nl;
    salt /= np;
    cout << min(drink, salt, lemon) / n << endl;
    return 0;
};