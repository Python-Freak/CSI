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

bool triangle(int a, int b, int c)
{
    return ((a < b + c) && (b < a + c) && (c < a + b));
}

bool segment(int a, int b, int c)
{
    return ((a == b + c) || (b == a + c) || (c == a + b));
}

int main(int args, char *argc[])
{
    // CODE HERE
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (triangle(a, b, c) || triangle(b, c, d) || triangle(c, d, a) || triangle(d, a, b))
    {
        cout << "TRIANGLE" << endl;
    }
    else if (segment(a, b, c) || segment(b, c, d) || segment(c, d, a) || segment(d, a, b))
    {
        cout << "SEGMENT" << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
};