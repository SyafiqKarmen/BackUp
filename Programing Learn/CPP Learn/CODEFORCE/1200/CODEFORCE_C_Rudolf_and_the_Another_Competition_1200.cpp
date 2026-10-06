#include <bits/stdc++.h> 
using namespace std; 
 
int main () { 
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
 
    int testCase {0}, Rudolf {0}, RudolfPosition{1} , total {0}; 
    long long RudolfPenalty {0}; 
    vector<int>array; 
 
    cin >> testCase; 
 
    while (testCase--){ 
        int participant {0}, problem {0}, limit {0}; 
        cin >> participant >> problem >> limit; 
 
        for (int i {0}; i < participant; ++i){ 
             
            array.clear(); 
            total = 0; 
            long long penalty {0}; 
             
            for (int j {0}; j < problem; ++j){ 
                int x {0};  
                cin >> x; 
                array.push_back(x); 
            } 
 
            sort(array.begin(), array.end()); 
 
            int solved {0}; 
 
            for (int j {0}; j < array.size(); ++j){ 
                if (array[j] + total > limit){ 
                    break; 
                }else if (total < limit){ 
                    total += array[j]; 
                    penalty += total; 
                    ++solved; 
                } 
            } 
 
            if (i == 0){ 
                Rudolf = solved; 
                RudolfPenalty = penalty; 
            } else { 
                if (solved > Rudolf || 
                    (solved == Rudolf && penalty < RudolfPenalty)){ 
                    ++RudolfPosition; 
                } 
            } 
        } 

        cout << RudolfPosition << '\n'; 
        RudolfPosition = 1; 
    } 
}