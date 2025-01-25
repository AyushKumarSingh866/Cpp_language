#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of which you wan't the table: ";
    cin>>n;
    for (int i = 1; i <=10;i=i+1)
    {
       cout<<n<<'x'<<i<<'='<<n*i<<endl;
    }
    
}