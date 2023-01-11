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
    int time = 240;
    int N;
    cin >> N;
    int th;
    cin >> th;
    time -= th;
    int count = 0;
    int i = 1;
    while (time >= 0 && i <= N)
    {

        if (time - (i * 5) >= 0)
        {
            time -= (i * 5);
            count++;
        }
        else
        {

            break;
        }
        i++;
    }
    cout << count << endl;
    return 0;
};