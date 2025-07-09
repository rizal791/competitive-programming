#include <iostream>
using namespace std;

int main(){
    int n, o, p, x;
    cin >> n >> o >> p;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    if (o == 1) {
        x = a[0];
        for (int i = 1; i < n; i++) {
            x += a[i];
        }
    } else if (o == 2) {
        x = a[0];
        for (int i = 1; i < n; i++) {
            x -= a[i];
        }
    }

    if (x == p) {
        cout << "Benar";
    } else {
        cout << "Salah";
    }

    return 0;
}
