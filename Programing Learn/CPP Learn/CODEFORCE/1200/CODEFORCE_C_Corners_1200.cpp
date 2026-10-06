#include <bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase {0}, row {0}, coloum {0}, cnt1 {0}, isNol {0}, highestNol {0};
    vector<string> array;                                      
    
    cin >> testCase;

    while (testCase--)
    {
        array.clear();
        isNol = 0;                                            
        highestNol = 0;
        cnt1 = 0;
        cin >> row >> coloum;

        array.resize(row);                                    

        for (int i {0}; i < row; ++i){

            cin >> array[i];                                  

            for (int j {0}; j < coloum; ++j){

                if (array[i][j] == '1'){                      
                    ++cnt1;
                }
            }
        }

        if (row == 2 && coloum == 2){

            isNol += (array[0][0] == '0');                   
            isNol += (array[0][1] == '0');                   
            isNol += (array[1][1] == '0');                   
            isNol += (array[1][0] == '0');                   

            if (isNol >= 2){                                 
                cout << cnt1;                                
            } else if (isNol == 1) {                         
                cout << cnt1 - 1;                            
            } else {
                cout << cnt1 - 2;                            
            }

        } else {

            for (int k {1}; k < row; ++k){
                for (int l {1}; l < coloum; ++l){

                    isNol += (array[k - 1][l - 1] == '0');    
                    isNol += (array[k][l - 1] == '0');        
                    isNol += (array[k - 1][l] == '0');        
                    isNol += (array[k][l] == '0');            

                    if (highestNol < isNol){                  
                        highestNol = isNol;                   
                    }

                    isNol = 0;
                }
            }

            if (highestNol == 0){
                cout << cnt1 - 2;
            } else if (highestNol == 1) {
                cout << cnt1 - 1;
            } else {
                cout << cnt1;
            }
        }

        cout << '\n';                                         
    }
}