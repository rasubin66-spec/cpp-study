#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

  
    int maxcounter = 0;
    int answer = 1;

    for(int i = 0; i<n; i++){
        int count = 0;

        for (int j = 1; j<=v[i] ; j++){
            if(v[i]%j==0){
                count++ ;
            }
        }

        if (count >= maxcounter){
                maxcounter = count;
                answer = v[i];
            }
    }

    cout << answer;

    return 0;


}