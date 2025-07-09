#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    int g[n];
    double x[n];
    for (int i = 0; i < n; i++){
        cin>>g[i];
    }
    for (int i = 0; i < n; i++)
    {
        x[i]=(5.0/6.0)*g[i]/1000;
        cout << fixed << setprecision(2);
        cout<<x[i]<<" "<<endl;
    }
    
}
