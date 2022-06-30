#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> stack;

int main()
{
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string op;
        cin >> op;
        if (op == "push")
        {
            cin >> num;
            stack.push_back(num);
        }
        else if (op == "pop")
        {
            if (stack.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << stack.back() << "\n";
                stack.pop_back();
            }
        }
        else if (op == "size")
        {
            cout << stack.size() << "\n";
        }
        else if (op == "empty")
        {
            if (stack.empty())
            {
                cout << 1 << "\n";
            }
            else
                cout << 0 << "\n";
        }
        else
        {
            if (stack.empty())
            {
                cout << -1 << "\n";
            }
            else
                cout << stack.back() << "\n";
        }
    }
}