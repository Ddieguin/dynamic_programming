#include <iostream>
#include <cstring>

using namespace std;


//vetor de memorizacao
int MEMO[1024];

int fib(int x) {
    
    if(x <= 1) return 1;
    int& memo = MEMO[x]; //variavel de referencia para a determinada posicao MEMO[x]
    if(memo != -1) return memo;
    return memo = fib(x - 1) + fib(x - 2); 

}

int main(int argc, char  *argv[]) {
    
    int x = stoi(argv[1]);
    memset(MEMO, -1, sizeof MEMO);
    cout << fib(x) << endl;

}