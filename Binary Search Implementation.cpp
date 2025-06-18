#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr={1,2,3,5,7};
    int x=5;
    int l=0;
    int r=4;
    int ans=0;
    int mid;
    while(l<=r){
        mid=(l+r)/2;
        if(arr[mid]==x){
            ans=mid;
            break;
        }
        else if(arr[mid]>x) r=mid-1;
        else l=mid+1;
        
        
    }
    cout<<ans;

    return 0;
}
