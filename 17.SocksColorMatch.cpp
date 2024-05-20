#include <iostream>
#include <unordered_map>

using namespace std;

int sockMerchant(int Arr[], int ArrLen) {
    unordered_map<int, int> sockCount;
    int pairs = 0;

    for (int i = 0; i < ArrLen; ++i) {
        sockCount[Arr[i]]++;
    }

    for (auto &sock : sockCount) {
        pairs += sock.second / 2;
    }

    return pairs;
}

int main() {
    int n;
    cin >> n;
    
    if (n < 0 || n > 100) {
        cout << "Invalid Input";
        return 0;
    }
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0 || a[i] > 100) {
            cout << "Invalid Input";
            return 0;
        }
    }
    
    cout << sockMerchant(a, n);    
    return 0;
}