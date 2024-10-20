#include <iostream>
#include <string>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int t;
    cin >> t; 
    forn(tt, t) {
        string s;
        cin >> s; 
        bool ok = true;

    
        if (s.length() % 2 != 0) {
            ok = false; 
        } else {
            int half_length = s.length() / 2;
            // Compare the first half and the second half
            forn(i, half_length) {
                if (s[i] != s[i + half_length]) {
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << endl; 
    }
    return 0;
}
