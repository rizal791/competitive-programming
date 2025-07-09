#include <iostream>
#include <string>
using namespace std;

int main(){
    string n;
    cin>>n;
    string k="IF";

    if (n.find(k) != string::npos) {
        cout << "Ya";
    } else {
        cout << "Tidak";
    }
}