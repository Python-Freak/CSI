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

template <typename T>
void printArr(T *arr, int n)
{
    cout << "[ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\b ] " << endl;
}

int main(int args, char *argc[])
{
    // CODE HERE
    int cases;
    cin >> cases;
    while (cases--)
    {
        int n = 4;
        arr(marathon, n);
        for (int i = 0; i < n; i++)
        {
            cin >> marathon[i];
        }
        int timur = marathon[0];
        sort(marathon, marathon + n);
        // printArr<int>(marathon, n);
        // cout << timur << endl;
        int i = 0;
        while (marathon[i] != timur)
        {
            i++;
        }

        cout << n - i - 1 << endl;
    }

    return 0;
};