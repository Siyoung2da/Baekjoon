// 정답 참고함, 다시 풀어봐야함. 이해 잘 안됨.

#include <iostream>
#include <cmath>
using namespace std;

int N;
int s_min = 1000000;
int arr[21][21];
bool isused[22];
void funct(int num, int cnt)
{
    if (num == (N / 2))
    {
        int sum1 = 0, sum2 = 0;
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                if (isused[i] == true && isused[j] == true)
                    sum1 += arr[i][j];
                if (isused[i] == false && isused[j] == false)
                    sum2 += arr[i][j];
            }
        }
        int tmp = abs(sum1 - sum2);
        if (s_min > tmp)
        {
            s_min = tmp;
        }
        return;
    }
    for (int i = cnt; i < N; i++)
    {
        if (!isused[i])
        {
            isused[i] = true;
            funct(num + 1, i + 1);
            isused[i] = false;
        }
    }
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            int x;
            cin >> x;
            arr[i][j] = x;
        }
    }
    funct(0, 1);
    cout << s_min << "\n";
}