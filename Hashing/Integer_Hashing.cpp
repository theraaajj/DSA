#include<bits/stdc++.h>
using namespace std;

int main(){

    // inputting the array 
    int n;                      // array length
    cin >> n;
     int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }    


    //precalculate
    int hash[13] = {0};                  // here, at max value supposedly 12, otherwise n+1
    for(int i= 0; i<n; i++){
        hash[arr[i]] += 1;               // the "value" at arr[i]. the same valued index in hash[] is increased 
    }


    // fetching queries
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;

        cout << hash[number] << endl;
    }

    return 0;
}

