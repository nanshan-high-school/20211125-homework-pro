#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int input;
            cin >> input;
            arr[i][j] = input;
        }
    }
    // max
    int max[n];
    for (int i = 0; i < n; i++) {
        max[i] = arr[i][0];
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > max[i]) {
                max[i] = arr[i][j];
            }
        }
    }
    // output
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += max[i];
    }
    cout << sum << endl;
    // output 2
    bool divide = false;
    for (int i = 0; i < n; i++) {
        if (sum % max[i] == 0) {
            if (divide == true)
                cout << " ";
            cout << max[i];
            divide = true;
        }
    }
    if (divide == false)
        cout << "-1";
}
