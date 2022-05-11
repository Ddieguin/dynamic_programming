#include <bits/stdc++.h> 
#define ROW 2
#define COL 2


using namespace std;



int main(int argc, char *argv[]) {

    int a [2][2] = {{2, 3}, {4, 5}};
    int b [2][2] = {{3, 5}, {6, 7}};

    int r[2][2];

    memset(r, 0, sizeof(r));

    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            cout << r[i][j] << endl;
        }
    }

    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            int ans = 0;
            for(int z = 0; z < ROW; z++) {
                ans += a[i][z] * b[z][j];
                r[i][j] = ans;
            }
        }   
    }

    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            cout << r[i][j] << endl;
        }
    }

    // return 0;
}


/**
 * * Para calcular a matriz M' dada por Mi * Mi+1 são necessárias bi-1 * bi * bi+1 
 * * multiplicações entre os elementos de Mi e Mi+1;
 * 
 */


/**
 * M[{2, 3}, {4, 5}] * N[{3, 5}, {6, 7}] = R[{2*3 + 3*6, 4*3 + 5*6}, {2*5 + 3*7, 4*5 + 5*7}]
 * 
 */