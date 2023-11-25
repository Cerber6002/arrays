#include <iostream>
using namespace std;
int main() {
int  i,j,k,n;
cin>>n>>k;
int cnt =0;
int arr[100];
for(i=0;i<n;i++)
 cin>>arr[i];
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++)
    if((arr[i]+arr[j])%k==0)
    cnt++;
}
cout<<cnt;

    return 0;
}