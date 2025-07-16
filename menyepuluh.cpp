#include <iostream>
using namespace std;

int main(){
    string n;
    cin>>n;
    string k="0";
    if ( n.find(k) != string::npos)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}