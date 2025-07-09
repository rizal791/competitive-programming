#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,x,y;
    float jumlah;
    cin>>a>>b>>c>>d;
    if (a>b)
    {
        swap(a,b);
    }
    for (int i =a+1; i < b; i++)
    {
        if (i%c !=0)
        {
            ++jumlah;
        }
        
    }
    for (int j = b+1;  j<d; j++)
    {
        if (j%d !=0)
        {
            ++jumlah;
        }
        
    }
    cout<<jumlah;
    
}