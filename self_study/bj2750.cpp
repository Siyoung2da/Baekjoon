#include <iostream>
using namespace std;

int N[1000];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int tmp;
            if (N[i] > N[j])
            {
                tmp = N[i];
                N[i] = N[j];
                N[j] = tmp;
            }
        }
    }
    for (int i=0;i<n;i++) {
        cout << N[i] << " ";
    }
}