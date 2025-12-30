#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <queue>
//           g++ -o main.exe main.cpp
//           .\main.exe
//    g++ -O2 -Wall -std=c++17 -o main main.cpp
//      ./main

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    priority_queue<int> devices;

    for(int i=0; i<n; i++){
        int charge_time;
        cin >> charge_time;
        devices.push(charge_time);
    }

    priority_queue<int, vector<int>, greater<int>> outlets;

    for(int i=0; i<m; i++){
        outlets.push(0);
    }

    while(!devices.empty()){
        int device_time = devices.top();
        devices.pop();

        int earliest_outlet = outlets.top();
        outlets.pop();

        outlets.push(earliest_outlet + device_time);
    }

    int max_time = 0;
    while(!outlets.empty()){
        max_time = max(max_time, outlets.top());
        outlets.pop();
    }

    cout << max_time << '\n';

    return 0;
}
