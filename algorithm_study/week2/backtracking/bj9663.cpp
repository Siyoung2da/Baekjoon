#include <iostream>
using namespace std;

int N, cnt = 0;

bool iused1[225];
bool iused2[225];
bool iused3[225];

void N_Queen(int cur)
{
    if (cur == N)
    {
        cnt++;
        return;
    }
    for (int i = 0; i < N; i++)
    {
        if ((iused1[i] == false) && (iused2[cur + i] == false) && (iused3[cur - i + N - 1] == false))
        {
            iused1[i] = true;
            iused2[cur + i] = true;
            iused3[cur - i + N - 1] = true;
            N_Queen(cur+1);
            iused1[i] = false;
            iused2[cur + i] = false;
            iused3[cur - i + N - 1] = false;
        }
    }
}
int main()
{
    cin >> N;
    N_Queen(0);
    cout << cnt << "\n";
}