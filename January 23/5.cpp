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

int binarySearch(int *a, int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    if (a[mid] == key)
    {
        return mid;
    }
    else if (a[mid] < key)
    {
        return binarySearch(a, mid + 1, e, key);
    }
    else
    {
        return binarySearch(a, s, mid - 1, key);
    }
    return -1;
}

int main(int args, char *argc[])
{
    // CODE HERE
    int n = 6;
    int a[n] = {1, 2, 3, 4, 5, 6};
    cout << binarySearch(a, 0, n, 5);
    return 0;
};