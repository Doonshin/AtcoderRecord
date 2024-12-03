#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    string s;
    cin >> s;
    int id = stoi(s.substr(3)); stoi: /*convert sting into int, substr: extract a part of string*/
    if (1 <= id && id <= 349 && id != 316) cout << "Yes";
    else cout << "No";
return 0;
}


