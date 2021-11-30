#include <iostream>

using namespace std;
int main() {
    int n;
    setlocale(0, "");
    cout << "Введите размер - ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j || i == n - j + 1){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

