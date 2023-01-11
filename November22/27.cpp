#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int findMaxIndex(int *arr, int n)
{
    int max = INT16_MIN;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    return index;
}

int main(int args, char *argc[])
{
    // CODE HERE
    int a, x, y, z;
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        int elem;
        cin >> elem;
        arr[i] = elem;
    }
    a = arr[findMaxIndex(arr, 4)];
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] != a)
        {
            cout << a - arr[i] << " ";
        }
    }

    return 0;
};