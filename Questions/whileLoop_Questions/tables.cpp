#include <iostream>
using namespace std;
int main(){
    int i =1;
    int n;
    cout<<"Enter the number of which you want the table: ";
    cin>>n;
    while (i<=10)
    {
        cout<<n<<'x'<<i<<'='<<n*i<<endl;
        i=i+1;
    }
    
}