#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

int main(){
    int n;
    cin >> n;

    vector <int> v;

    for(int i =0 ; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    int idx = 0;
    int size= v.size();
    int sum = 0;


    while(size!=0){
        sum = sum + (v[idx] * size);
        size --;
        idx ++;
    }

    cout << sum << endl;
}