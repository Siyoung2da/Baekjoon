#include <iostream>
using namespace std;

int main()
{
    int N;
    int x[50];
    int y[50];
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> x[i] >> y[i];
    }

    for (int i=0;i<N;i++) {
        int k=0;
        for (int j=0;j<N;j++) {
            if(x[i]<x[j]&&y[i]<y[j])
                k++;
        }
        cout << k+1 << " ";
    }
    cout << endl;
}