#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    int money;
    cin >> money;

    vector<int> v;

    for(int i = 0 ; i<n ; i++){
        int price ;
        cin >> price;
        v.push_back(price);
    }

    sort(v.begin(),v.end());

    int count = 0;
    

    for(int i = 0 ; i<n ; i++){
        if(money<v[i]){ //현재 물건을 보고 고침 
            break;
        }
        money-=v[i];
        count ++ ;
    }

    cout << count ;
}