#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    double sum = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < 0) {
            sum= sum+ arr[i];
        }
    }

    cout << sum << endl;
    return 0;
}
