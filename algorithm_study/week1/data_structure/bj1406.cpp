#include <iostream>
#include <list>
#include <string>
using namespace std;

list<char> editer;

int main()
{
    string start;
    cin >> start;
    for (int i = 0; i < start.length(); i++)
    {
        editer.push_back(start[i]);
    }
    list<char>::iterator cursor = editer.end();

    int n;
    char op;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> op;
        if (op == 'L')
        {
            if (cursor != editer.begin())
                cursor--;
        }
        else if (op == 'D')
        {
            if (cursor != editer.end())
                cursor++;
        }
        else if (op == 'B')
        {
            if(cursor!=editer.begin()) {
                cursor--;
                cursor = editer.erase(cursor);
            }
        }
        else
        {
            char ch;
            cin >> ch;
            editer.insert(cursor, ch);
        }
    }
    for (cursor = editer.begin(); cursor != editer.end(); cursor++)
    {
        cout << *cursor;
    }
    cout << "\n";
}
