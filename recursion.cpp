
#include <iostream>
#include <vector>

using namespace std; 

vector<int> input; 
vector<int> subset;
vector<vector<int>> permutations;
vector<int> permutation;
vector<vector<int>> subsets;

 
void printvector(vector<int> v){
    if(v.size() == 0){
        cout << "{}" ;
    }
    else {

        cout << "{ ";
        for(auto i : v){
        cout << i << ' ';
        }
        cout << "}";
    }
    cout << '\n';
}

 void search(int k, int n){
   
    if(k == n){
        //the subset is done so print it or add it to subsets
        subsets.push_back(subset);
        //printvector(subset);   
    }
    else {
            subset.push_back(input[k]);
            search(k+1, n);
            subset.pop_back();
            search(k+1, n);    
    }

}


//notes: w
void permSearch(int n, bool chosen[]){
    if(permutation.size() == n){
        vector<int> newPerm(permutation);
        permutations.push_back(newPerm);
    } 
    else {
        for(int i = 0; i<n; i++){
            if(chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(input[i]);
            permSearch(n, chosen);
            chosen[i] = false;
        }
    }

}

int main(){
    int x; 
    //read the input from user
    while(cin >> x){
        input.push_back(x);
    }
    const int n = input.size();
    cout << "Input size is :" << n << endl; 

    bool chosen[100] = {0};
    search(0, n);  
    permSearch(n, chosen);

    cout << "Printing subsets" << endl; 
    for(auto i : subsets){
        printvector(i);
    }

    cout << "Printing permutations" << endl; 
    for(auto k : permutations){
        printvector(k);
    }
}

