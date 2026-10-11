#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);

    string s;
    cin >> s;

    for (int i = 0; i < 3; i++) {
        if (i > 0) cout << " ";
        if (s[i] == 'A') cout << a[0];
        else if (s[i] == 'B') cout << a[1];
        else cout << a[2];
    }
    cout << "\n";
    return 0;
}