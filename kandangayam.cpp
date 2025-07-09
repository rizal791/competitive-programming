#include <iostream>
using namespace std;

int main(){
    int panjang[5], lebar[5], luas[5];
    for (int i = 0; i < 5; i++){
        cin>>panjang[i]>>lebar[i];
        luas[i]=panjang[i]*lebar[i];
    }

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (luas[j] < luas[j + 1]) {
                swap(luas[j], luas[j + 1]);
            }
        }
    }

    cout<<luas[0]; 
}