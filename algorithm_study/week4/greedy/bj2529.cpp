#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int k;
bool visit[10];
string str;
vector<int> temp;
vector<vector<int> > result;

void dfs(int s)
{
    if (s == k+1)
    {
        result.push_back(temp);
        return;
    }

    for (int i = 0; i < 10; i++)
    {
        if (!visit[i])
        {
            if (str[s - 1] == '<')
            {
                if (i > temp[s - 1])
                {
                    temp.push_back(i);
                    visit[i] = true;
                    dfs(s+1);
                    visit[i] = false;
                    temp.pop_back();
                }
            }
            else
            {
                if (i < temp[s - 1])
                {
                    temp.push_back(i);
                    visit[i] = true;
                    dfs(s+1);
                    visit[i] = false;
                    temp.pop_back();
                }
            }
        }
    }
}

int main()
{
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        char c;
        cin >> c;
        str.push_back(c);
    }
    for (int i = 0; i < 10; i++)
    {
        temp.push_back(i);
        visit[i] = true;
        dfs(1);
        temp.clear();
        for (int j=0;j<10;j++) 
            visit[j] = false; 
    }   

    for(int i=0;i<k+1;i++) {
        cout << result[result.size()-1][i];
    }
    cout << "\n";
    for(int i=0;i<k+1;i++) {
        cout << result[0][i];
    }
    cout << "\n";
}