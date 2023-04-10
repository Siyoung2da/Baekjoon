#include <iostream>
#include <string>

using namespace std;

int dx[8] = {0, 0, 1, -1, -1, -1, 1, 1};
int dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};

int main()
{
    string king, stone;
    int num;

    cin >> king >> stone >> num;

    int kingy = king[0] - 'A';
    int kingx = '8' - king[1];

    int stoney = stone[0] - 'A';
    int stonex = '8' - stone[1];

    for (int i = 0; i < num; i++)
    {
        string move;
        cin >> move;
        int dir = 0;
        
        if (move == "R") {
            dir = 0;
        }
        else if (move == "L") {
            dir = 1;
        }
        else if (move == "B") {
            dir = 2;
        }
        else if (move == "T") {
            dir = 3;
        }
        else if (move == "RT") {
            dir = 4;
        }
        else if (move == "LT") {
            dir = 5;
        }
        else if (move == "RB") {
            dir = 6;
        }
        else if (move == "LB") {
            dir = 7;
        }
    
        int king_x = kingx + dx[dir];
        int king_y = kingy + dy[dir];
    
        if(king_x < 0 || king_x >= 8 || king_y < 0 || king_y >= 8) continue;

        if (king_x == stonex && king_y == stoney) {
            int stone_x = stonex + dx[dir];
            int stone_y = stoney + dy[dir];
            if (stone_x < 0 || stone_x >= 8 || stone_y < 0 || stone_y >= 8) continue;
            stonex = stone_x;
            stoney = stone_y;
        }

        kingx = king_x;
        kingy = king_y;
    }
    
    cout << char(kingy + 'A') << 8 - kingx << '\n' << char(stoney + 'A') << 8 - stonex << '\n';
}