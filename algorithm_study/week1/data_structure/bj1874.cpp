#include <iostream>
#include <stack>
#include <vector>
using namespace std;

stack<int> st;
vector<char> result;

int main()
{
    int n, num = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        while (num <= x)
        {
            st.push(num);
            num++;
            result.push_back('+');
        }
        if (st.top() == x)
        {
            st.pop();
            result.push_back('-');
        }
        else
        {
            cout << "NO"
                 << "\n";
            return 0;
        }
    }
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << "\n";
}