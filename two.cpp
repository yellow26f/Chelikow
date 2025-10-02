#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    if (!(cin >> s)) return 0;
    if (s.find(':') != string::npos) {
        size_t p1 = s.find(':'), p2 = s.find(':', p1 + 1);
        int hh = stoi(s.substr(0, p1));
        int mm = stoi(s.substr(p1 + 1, p2 - p1 - 1));
        int ss = stoi(s.substr(p2 + 1));
        long long t = 1LL * hh * 3600 + 1LL * mm * 60 + ss;
        cout << t;
    } else {
        long long t = stoll(s);
        long long hh = t / 3600;
        long long mm = (t % 3600) / 60;
        long long ss = t % 60;
        cout << setfill('0') << setw(2) << hh << ":" << setw(2) << mm << ":" << setw(2) << ss;
    }
    return 0;
}
