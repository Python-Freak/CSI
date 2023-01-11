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
        int N;
        cin >> N;
        long long oddCount = 0, evenCount = 0, sum = 0;
        for (int i = 0; i < N; i++)
        {
            int elem;
            cin >> elem;
            if (elem % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
            sum += elem;
        }
        if (sum % 2 != 0 || sum == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (oddCount != 0 && evenCount != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
};