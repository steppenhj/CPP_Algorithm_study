#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
//           g++ -o main.exe main.cpp
//           .\main.exe
//    g++ -O2 -Wall -std=c++17 -o main main.cpp
//      ./main

using namespace std;

int d(int n){
    int sum = n;

    while(n != 0){
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<bool> is_generated(10001, false);

    for(int i=1; i<= 10000; i++){
        int next_num = d(i);

        if(next_num <= 10000){
            is_generated[next_num] = true;
        }
    }

    for(int i= 1; i<= 10000; i++){
        if(!is_generated[i]){
            cout << i << '\n';
        }
    }

    return 0;
}
