#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long pre; 
    long long cur;
    long long moves = 0;
    cin >> n ;
    cin >> pre ;

    while(n-1){
        cin >> cur;
        if(pre > cur){
            moves += pre-cur;
        }
        else {
            pre = cur;
        }
        n--; 
    }

    cout << moves << endl;  
}