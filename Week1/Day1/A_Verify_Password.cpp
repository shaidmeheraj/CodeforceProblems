/* Bismillahir Rahmanir Raheem */
/* Shaid Meheraj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

bool sorted(const vector<char> &s) {
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] < s[i - 1]) {
            return false;
        }
    }
    return true;
}

bool solve(const string &s) {
    vector<char> d, l;

    for (char c : s) {
        if (isdigit(c)) {
            d.push_back(c);
        } else if (isalpha(c)) {
            l.push_back(c);
        }
    }
    if (!sorted(d)) {
        return false;
    }
    if (!sorted(l)) {
        return false;
    }
    bool flag = false;
    for (char c : s) {
        if (isalpha(c)) {
            flag = true;
        } else if (flag && isdigit(c)) {
            return false;
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (solve(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
//Alhamdulillah...
