#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int x=0;x<t;x++){
        int i,j;
        cin>>i>>j;
        for(int y=i;y<j;y++){
            int max=INT_MAX;
            if(arr[y]<=max){
                arr[y]=max;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
