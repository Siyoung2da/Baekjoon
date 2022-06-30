#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> A;
    vector<int> B;
    int x, N, M;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        A.push_back(x);
    }

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> x;
        B.push_back(x);
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < M; i++)
    {
        if (B[i] < A[0] || B[i] > A[N - 1])
        {
            cout << 0 << "\n";
            continue;
        }
        else
        {
            int high = N - 1;
            int low = 0;
            int mid = (high + low) / 2;
            while (1)
            {
                if (low >= high)
                {
                    if (B[i] != A[mid])
                    {
                        cout << 0 << "\n";
                        break;
                    }
                    else {
                        cout << 1 << "\n";
                        break;
                    }
                }
                
                if (B[i] == A[mid])
                {
                    cout << 1 << "\n";
                    break;
                }
                else if (B[i] > A[mid])
                {
                    low = mid + 1;
                    mid = (low + high) / 2;
                }
                else
                {
                    high = mid - 1;
                    mid = (low + high) / 2;
                }
            }
        }
    }
}