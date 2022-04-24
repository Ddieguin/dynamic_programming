#include <iostream>
#include <cstring>


using namespace std;
int memo[2020][2020];
int n, s;
const int INF = 0x3f3f3f3f;

int value[2020], wgt[2020];

int pd(int ind, int cap) {
    if(ind == n) return 0;
    if(cap < 0) return -INF;

    int& pmd = memo[ind][cap];
    if(pmd != -1) return pmd;
    return pmd = max(pd(ind + 1, cap - wgt[ind]) + value[ind], pd(ind + 1, cap));
}


int main() {
    cin >> s >> n;

    for(int i = 0; i < n; i++) {
        cin >> wgt[i] >> value[i];
    }

    memset(memo, -1, sizeof(memo)); 
    cout << pd(0, s) << endl; //ind 0 e cap total;
}