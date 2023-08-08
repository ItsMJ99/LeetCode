// Update your code below to solve the problem

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int t1 = 0;
    int t2 = 0;
    while (t != 0)
    {
        int A[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> A[i];
        }
        for (int j = 0; j < 10; j++)
        {
            if (j <= 4 && A[j] == 1)
                t1 += 1;
            else if (j >= 5 && A[j] == 1)
                t2 += 1;
            else
                continue;
        }
        t -= 1;
    }
    if (t1 == t2)
        return 0;
    else
        return t1 > t2 ? 1 : 2;
}
