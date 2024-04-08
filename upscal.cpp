#include <iostream>
using namespace std;

void print_checkerboard(int n) {
    for (int i = 0; i < 2 * n; ++i) {
        for (int j = 0; j < 2 * n; ++j) {
            if ((i + j) % 2 == 0) {
                cout << "#";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t; // Number of test cases

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n; // Read the input
        print_checkerboard(n); // Output the checkerboard
    }

   
}
