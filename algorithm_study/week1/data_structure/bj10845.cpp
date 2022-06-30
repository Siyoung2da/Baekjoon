#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> queue;

int main()
{
    int n, num;
    string op;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> op;
        if (op == "push")
        {
            cin >> num;
            queue.push_back(num);
        }
        else if (op == "pop")
        {
            if (queue.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << queue.front() << "\n"; 
                queue.erase(queue.begin());
            }
        }
        else if (op == "size")
        {
            cout << queue.size() << "\n";
        }
        else if (op == "empty")
        {
            if (queue.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (op == "front")
        {
            if (queue.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << queue.front() << "\n";
            }
        }
        else
        {
            if (queue.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << queue.back() << "\n";
            }
        }
    }
}