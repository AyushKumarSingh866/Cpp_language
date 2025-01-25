#include<iostream>
using namespace std;
int main(){
    int n,p;
    cout<<"Enter the number";
    cin>>n;
    cout<<"Enter the power of the number which you want";
    cin>>p;
    int num=n;
    for (int i=1;i<p;i=i+1 )
    {
        num=num*n;
    }
    cout<<num;
    
}