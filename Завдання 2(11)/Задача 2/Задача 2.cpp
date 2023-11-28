#include <iostream>

using namespace std;

int main() {
    int n, m;
    cout << "n= ";
    cin >> n;

    cout << "m:=";
    cin >> m;

    if ((n < 1) || (m < 1)) {
        cout << "try again";
    }
    else {
        int array[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                array[i][j] = ((rand() % 19) - 9);
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << array[i][j] << " ";
            }
            cout << "\n";
        }

        for (int i = 0; i < n; i++) {
            cout << "In a row #" << i << " <0 in columns #: ";
            for (int j = 0; j < m; j++) {
                if (array[i][j] < 0) cout << j << ", ";
            }
            cout << "\n";
        }

    }
    return 0;
}