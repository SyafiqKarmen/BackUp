#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testCase {0}, N {0};
    string document;
    cin >> testCase;
    
    while (testCase--){
        cin >> N >> document;
        
        vector<int> st;
        vector<bool> printed(N + 1, false);
        
        for (int i {0}; i < N; ++i){
            int docNum = i + 1;
            if (document[i] == '1') {
                st.push_back(docNum);
            } else if (document[i] == '2') {
                if (!st.empty()) {
                    printed[st.back()] = true;
                    st.pop_back();
                } else {
                    printed[docNum] = true;
                }
            } else {
                printed[docNum] = true;
            }
        }
        
        vector<int> notPrinted;
        for (int i = 1; i <= N; ++i) {
            if (!printed[i]) {
                notPrinted.push_back(i);
            }
        }
        
        cout << notPrinted.size() << "\n";
        for (int i = 0; i < (int)notPrinted.size(); ++i) {
            cout << notPrinted[i] << (i == (int)notPrinted.size() - 1 ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}
