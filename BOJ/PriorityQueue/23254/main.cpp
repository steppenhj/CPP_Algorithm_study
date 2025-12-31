#include <iostream>
#include <algorithm>
#include <vector>
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
    int total_time = n*24;

    vector<int> a(m);
    vector<int> b(m);

    for(int i=0; i<m; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    priority_queue<pair<int, int>> pq;

    int total_score = 0;
    for(int i=0; i<m; i++){
        pq.push({b[i], a[i]});
        total_score += a[i];
    }

    while(total_time>0 && !pq.empty()){
        int efficiency = pq.top().first;
        int current_score = pq.top().second;
        pq.pop();

        int max_hour = (100 - current_score) / efficiency;

        int spend_hour = min(total_time, max_hour);

        total_score += spend_hour * efficiency;
        total_time -= spend_hour;
        current_score += spend_hour * efficiency;

        if(current_score < 100){
            int remainder = 100 - current_score;

            if(remainder > 0){
                pq.push({remainder, current_score});
            }
        }
    }
    
    cout << total_score << endl;

    return 0;
}
