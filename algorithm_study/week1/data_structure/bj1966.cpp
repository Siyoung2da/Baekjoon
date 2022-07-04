#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        vector<pair<int, int> > printer;
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            int importance;
            cin >> importance;
            printer.push_back(pair<int, int>(i, importance));
        }
        int cnt = 0;
        while(1)
        {
            int k = printer[0].first;
            int check = 0;
            for (int i = 1; i < printer.size(); i++)
            {
                if (printer[i].second > printer[0].second)
                {
                    check++;
                    printer.push_back(printer[0]);
                    printer.erase(printer.begin());
                    break;
                }
            }
            if(check==0)
            {
                if (k == m) {
                    printer.erase(printer.begin());
                    cnt++;
                    break;
                }
                printer.erase(printer.begin());
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}