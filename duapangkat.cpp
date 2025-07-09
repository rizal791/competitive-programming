#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool ketemu = false;
    for (int k = 0; k <= 16; k++){
        if (pow(2,k)==n){
            cout<<"ya";
            ketemu = true;
            break;
        }  
    }
    if (!ketemu){
     cout<<"bukan";
    }
}