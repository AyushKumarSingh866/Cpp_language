#include <iostream>
using namespace std;
#include <climits>
int main(){
    int arr[5]={5,6,7,9,3};
    int ans= INT_MAX;
    for ( int i = 0; i < 5; i++)
    {
        if (arr[i]<ans)
        {
            ans=arr[i];
        }
        
    }
     cout<<ans<<" ";

    return 0;
}