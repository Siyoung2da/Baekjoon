#include <iostream>
using namespace std;

int tree[26][2];

void preorder(int root)
{
    if (root == -1)
        return;
    else
    {
        cout << (char)(root + 'A');
        preorder(tree[root][0]);
        preorder(tree[root][1]);
    }
}
void inorder(int root)
{
    if (root == -1)
        return;
    else
    {
        inorder(tree[root][0]);
        cout << (char)(root + 'A');
        inorder(tree[root][1]);
    }
}
void postorder(int root)
{
    if (root == -1)
        return;
    else
    {
        postorder(tree[root][0]);
        postorder(tree[root][1]);
        cout << (char)(root + 'A');
    }
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        char root, left, right;
        cin >> root >> left >> right;
        root = root - 'A';
        if (left == '.')
        {
            tree[root][0] = -1;
        }
        else
            tree[root][0] = left - 'A';
        if (right == '.')
        {
            tree[root][1] = -1;
        }
        else
            tree[root][1] = right - 'A';
    }
    preorder(0);
    cout << '\n';
    inorder(0);
    cout << '\n';
    postorder(0);
    cout << '\n';
}
