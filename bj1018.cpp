#include <iostream>
using namespace std;

int main() {   
    char board[50][51];
    char chess_W[8][9] = { "WBWBWBWB",
                            "BWBWBWBW",
                            "WBWBWBWB",
                            "BWBWBWBW",
                            "WBWBWBWB",
                            "BWBWBWBW",
                            "WBWBWBWB",
                            "BWBWBWBW"};

    char chess_B[8][9] = { "BWBWBWBW",
                            "WBWBWBWB",
                            "BWBWBWBW",
                            "WBWBWBWB",
                            "BWBWBWBW",
                            "WBWBWBWB",
                            "BWBWBWBW",
                            "WBWBWBWB"};
    int n, m;
    cin >> n >> m;
    for (int i=0;i<n;i++) {
        cin >> board[i];
    }
    int tmp = 0;
    int min = 64;
    for (int i=0;i<=n-8;i++) {
        for (int j=0;j<=m-8;j++) {
            int count1 = 0;
            int count2 = 0;
            
            for (int x=0;x<8;x++) {
                for (int y=0;y<8;y++) {
                    if (board[i+x][j+y] != chess_W[x][y])   count1++;
                    if (board[i+x][j+y] != chess_B[x][y])   count2++;
                }
            }
            
            count1<count2 ? tmp=count1 : tmp=count2;
            
            if (min>tmp) min = tmp;
        }
    }
    cout << min << endl;
}