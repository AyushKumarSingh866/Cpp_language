#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int i=1;
    int sum=0;
     
    do
    {
         
        sum=sum+i;
        i++;
       
        
    } while ((i<=n));
    cout<<sum;
}