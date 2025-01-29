#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number upto which you want odd numbers: ";
    cin>>n;
    int i=2;
    while (i<=n)
    {
        if (i%2!=0)
        {
            cout<<i<<" ";
        }
        i++;
    }
        
}