#include <iostream>
using namespace std;

int main() {
    int target;
    cout << "Set the target:" << endl;
    cin >> target;

    int n;
    cout << "Array Size:" << endl;
    cin >> n;

    int arr[n] = {};
    cout << "Array elements are:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                 int sum = arr[i] + arr[j] + arr[k];
            if (sum == target) { 
                cout << "{" << i << "," << j << "," << k << "}" << endl;
            }
            } 
        }
    }

    return 0;
}



