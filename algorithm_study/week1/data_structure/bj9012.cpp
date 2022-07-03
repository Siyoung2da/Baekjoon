#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<char> vps;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int left = 0, right = 0;
        string ch;
        cin >> ch;
        for (int i = 0; i < ch.length(); i++)
        {
            vps.push(ch[i]);
        }
        while (!vps.empty())
        {
            if (vps.top() == '(')
            {
                vps.pop();
                left++;
            }
            else if (vps.top() == ')')
            {
                vps.pop();
                right++;
            }
            if (left > right)
            {
                cout << "NO"
                     << "\n";
                break;
            }
        }
        if (right > left)
        {
            cout << "NO"
                 << "\n";
        }
        else if (right == left)
        {
            cout << "YES"
                 << "\n";
        }

        while (!vps.empty())
            vps.pop();
    }
}