#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
//           g++ -o main.exe main.cpp
//           .\main.exe
//    g++ -O2 -Wall -std=c++17 -o main main.cpp
//      ./main

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int max_cnt = 0;
    
    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++){
        int cnt = 0;
        for(int j=i; j<n; j++){
            if(arr[j] - arr[i] < 5){
                cnt++;
            } else{
                break;
            }
        }
        max_cnt = max(max_cnt, cnt);
    }

    cout << 5 - max_cnt;

    return 0;
}
