#include <iostream>
#include <vector>
#include <cmath> // for abs function

using namespace std;
string canAliceWin(int n, int a, int b) {
    int distance = abs(a - b);
    if (  distance % 2 == 0) {
        return "YES";
    } else {
        return "NO";
    }
}
int main() {
    int t;
    cin >> t; // Read number of test cases
    vector<string> results;
    for (int i = 0; i < t; ++i) {
        int n, a, b;
        cin >> n >> a >> b; // Read n, a, b
        results.push_back(canAliceWin(n, a, b));
    }
    // Print all results
    for (const string& result : results) {
        cout << result << endl;
    }
    return 0;
}