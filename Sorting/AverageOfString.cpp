#include<bits/stdc++.h>

using namespace std;

int averageOfString(string s) {
    int sum = 0;
    int length = s.length();
    for (int i = 0; i < length; i++) {
        sum += s[i];
    }
    return floor(sum / length);
}

int main(void) {
    // int n;
    // cin >> n;
    string s;
    cin >> s;
    cout << averageOfString(s) << endl;
    return 0;
}