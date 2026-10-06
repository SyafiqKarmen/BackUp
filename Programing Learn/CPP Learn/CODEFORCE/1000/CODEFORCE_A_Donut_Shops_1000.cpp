#include <bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase {0};
    long long retailA {0}, boxB {0}, boxBPrice {0};
    long long donutA {0}, donutB {0};

    cin >> testCase;

    while (testCase--){

        cin >> retailA >> boxB >> boxBPrice;

        donutA = -1;
        donutB = -1;

        if (retailA < boxBPrice){              
            donutA = 1;                        
        }

        if (retailA * boxB > boxBPrice){      
            donutB = boxB;                     
        }

        cout << donutA << " " << donutB << '\n';
    }
}