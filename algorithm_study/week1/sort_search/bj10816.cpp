#include <iostream>
#include <map>
using namespace std;

map<int, int> num_card;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        num_card[x]++;
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        cout << num_card[x] << " ";
    }
}