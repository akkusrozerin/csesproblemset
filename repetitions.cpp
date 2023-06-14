#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
 
    string s;
    getline(cin, s);

    int maximum = 1;
    int curMax  = 1;
    char cur = s[0];

    for(int i = 1; i< s.length(); i++){
        if(s[i] == cur) {
            curMax++;
            maximum = max(curMax, maximum);
        }
        else {
            cur = s[i];
            curMax = 1;
        }
    }
    
        cout << maximum << endl;
}