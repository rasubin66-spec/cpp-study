#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i<n ; i++){
        cin >> v[i];
    }

    int m;
    cin >> m;

    vector<int> target(m);

    for(int i = 0; i<m ; i++){
        cin >> target[i];
    }

    sort(v.begin(),v.end());

    int idx = 0;

    int correct = 0;

    while(idx < m){

        int left = 0 ; // 값을 여기서 새로 초기화하는 
        int right = n-1;

        bool found = binary_search(v.begin(),v.end(),target[idx]);

        if (found == true){
            while(left<=right){

                int mid = (left+ right)/2;

                if (v[mid] == target[idx]){
                    correct = 1;
                    break;
                }
                else if(v[mid] < target[idx]){
                    left = mid + 1;
                }
                else{
                    right = mid -1 ;
                }
            }
        
        }
        else{
            correct = 0;
        }
        cout << correct << endl;
        idx ++ ;
    }

    return 0;

}