#include <iostream>
#include <string>
using namespace std;

bool Check(int n) {
    // hàm kiểm tra xem số nguyên n có phải là số đối xứng hay không
    string s = to_string(n);
    return s == string(s.rbegin(), s.rend());
}

int main() {
    int t;
    cin >> t;  // số lượng test case
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        int count = 0;
        for (int n = a; n <= b; n++) {
            if (Check(n)) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
