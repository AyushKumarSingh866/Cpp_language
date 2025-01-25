#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age of the person: ";
    cin>>age;
    if (age>=18)
    {
        cout<<"The person is Adult";
    }
    else{
        cout<<"The person is a Teenager";
    }
}