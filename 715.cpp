#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 1; i < 10000; i++)
    {
        if ((i % n) == 2)
        {
            cout << i << endl;
        }
    }

    return 0;
}