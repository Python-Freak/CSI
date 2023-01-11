#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(int args, char *argc[])
{
    // CODE HERE
    int N, M;
    cin >> N >> M;
    if (M == 1)
    {
        cout << N - 1 << endl;
    }
    else
    {
        cout << (long long int)(M - 1) * N << endl;
    }

    return 0;
};