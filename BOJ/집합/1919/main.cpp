#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <cmath>
//           g++ -o main.exe main.cpp
//           .\main.exe
//    g++ -O2 -Wall -std=c++17 -o main main.cpp
//      ./main

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a, b;
    cin >> a;
    cin >> b;

    int countA[26] = {0, };
    int countB[26] = {0, };

    for(int i=0; i<a.length(); i++){
        countA[a[i] - 'a']++;
    }
    for(int i=0; i<b.length(); i++){
        countB[b[i] - 'b']++;
    }

    int ans = 0;

    for(int i=0; i<26; i++){
        ans += abs(countA[i] - countB[i]);
    }

    cout << ans << endl;

    return 0;
}
