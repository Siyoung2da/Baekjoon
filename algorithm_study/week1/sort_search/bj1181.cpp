#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> word;
bool condition(string a, string b);

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        word.push_back(str);
    }
    sort(word.begin(), word.end(), condition);
    word.erase(unique(word.begin(), word.end()), word.end());
    
    for (int i = 0; i < word.size(); i++)
    {
        cout << word[i] << "\n";
    }
}
bool condition(string a, string b)
{
    if (a.length() < b.length())
        return true;
    else if (a.length() == b.length())
    {
        if (a < b)
            return true;
        else
            return false;
    }
    else
        return false;
}
