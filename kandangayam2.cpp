#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int panjang[n], lebar[n], luas[n];
    for (int i = 0; i < n; i++){
        cin>>panjang[i]>>lebar[i];
        luas[i]=panjang[i]*lebar[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (luas[j] < luas[j + 1]) {
                swap(luas[j], luas[j + 1]);
            }
        }
    }

    cout<<luas[0]<<" "<<luas[n-1]; 
}