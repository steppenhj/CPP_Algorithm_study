#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <set>
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

    set<string> arr;
    int ans = 0;

    for(int i=0; i<n; i++){
        string name;
        cin >> name;

        if(name == "ENTER"){
            arr.clear();
        }else{
            if(arr.find(name) == arr.end()){
                ans++;
                arr.insert(name);
            }
        }
    }

    cout << ans;

    return 0;
}
