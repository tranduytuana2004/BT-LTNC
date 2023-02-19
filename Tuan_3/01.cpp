#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (found) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
