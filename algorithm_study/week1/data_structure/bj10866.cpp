#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> deque;

int main()
{
    int n, num;
    string op;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> op;
        if (op == "push_front")
        {
            cin >> num;
            deque.insert(deque.begin(), num);
        }
        else if (op == "push_back")
        {
            cin >> num;
            deque.push_back(num);
        }
        else if (op == "pop_front")
        {
            if (deque.empty())
                cout << -1 << "\n";
            else
            {
                cout << deque.front() << "\n";
                deque.erase(deque.begin());
            }
        }
        else if (op == "pop_back")
        {
            if (deque.empty())
                cout << -1 << "\n";
            else
            {
                cout << deque.back() << "\n";
                deque.pop_back();
            }
        }
        else if (op == "size")
        {
            cout << deque.size() << "\n";
        }
        else if (op == "empty")
        {
            if (deque.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (op == "front")
        {
            if (deque.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << deque.front() << "\n";
            }
        }
        else
        {
            if (deque.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << deque.back() << "\n";
            }
        }
    }
}