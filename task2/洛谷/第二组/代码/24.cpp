#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    double ans;
    if (x <= 150) {
        ans = x * 0.4463;
    } else if (x <= 400) {
        ans = 150 * 0.4463 + (x - 150) * 0.4663;
    } else {
        ans = 150 * 0.4463 + 250 * 0.4663 + (x - 400) * 0.5663;
    }
    
    cout << fixed << setprecision(1) << ans << "\n";
    return 0;
}