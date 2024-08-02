#include<bits/stdc++.h>
using namespace std;

int main(){
    //inputting the string
    string s;
    cin >> s;

    // precompute
    int hash[26] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i] - 'a']++;
    }

    //fetching queries
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        //fetch the frequency
        cout << hash[c - 'a']<< endl;
    }
}



// this s-a, c-a is done because we're mapping the 0-25 index of hash array with the alphabets.
// if we've to conside both the upper and lower case alphabets, we'll have to take the hash array size of 256
// and then there's no need to do any s-a, c-a typecasting. instead just use the s[i], i.e. ASCII code, 
// and the value will be updated at corresponding index
