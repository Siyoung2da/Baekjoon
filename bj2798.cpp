#include <iostream>
using namespace std;

int main() {
    int N, M, tmp, max, max_tmp;
    cin >> N >> M;

    int *card = new int[N];
    for(int i=0; i<N; i++) {
        cin >> card[i];
    }

    max = (card[0] + card[1] + card[2]) < M ? card[0] + card[1] + card[2] : 0 ;
    
    for (int i=0;i<N-2;i++) {
        for (int j=i+1; j<N-1; j++) {
            for (int k=j+1; k<N; k++) {
                tmp = card[i] + card[j] + card[k];
                if (max<tmp && tmp<=M)
                    max = tmp;
            }
        }
    }
    cout << max << endl;
    delete [] card;
}