#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;

    vector <int> v;

    for (int i = 0 ; i < n ; i++){
        int x ;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end(),greater<int>());

    int max_weight = 0 ;
    int weigth = 0 ;
    int loopcount = 1;

    for(int i = 0 ; i < n ;i++){
        weigth = v[i] * loopcount;
        loopcount ++ ;
        if (weigth>=max_weight){
            max_weight = weigth;
        }
    }

    cout << max_weight;

    return 0 ;

}