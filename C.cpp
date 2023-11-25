#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double arr[101];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    double mx=abs(arr[0]);
    for(int i=1;i<n;i++){
        if(abs(arr[i])>mx)
        mx=abs(arr[i]);
    }
    cout<<fixed<<setprecision(2)<<mx;
    
    return 0;
}