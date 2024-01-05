#include <iostream>
#include <string>
using namespace std;

int recursion(string& s, int l, int r, int& count) {
    count++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1, count);
}

int isPalindrome(string& s, int& count) {
    count = 0;
    return recursion(s, 0, s.size() - 1, count);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        int count;
        cout << isPalindrome(s, count) << " " << count << "\n";
    }
}
