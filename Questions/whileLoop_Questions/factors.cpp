#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of which you want thwe factor: ";
    cin>>n;
    int i=1;
    while ( i<=n )
    {
        if (n%i==0)
        {
            cout<<i<< " ";
        }
        
       
        i++;
    }
    
}