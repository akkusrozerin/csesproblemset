#include <iostream>
#include <vector>
using namespace std;

int main (){
long long n;
long long x;
cin >> n ;
long long  sum = n*(n+1)/2; 
n--;
while(n){
    cin >> x;
    sum =sum-x;
    n--;
}
cout << sum << '\n';
}
