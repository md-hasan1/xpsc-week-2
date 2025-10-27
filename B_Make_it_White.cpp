#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int fist=-1,last=-1;
        fist=s.find("B");
        last=s.rfind("B");
        int ans=last-fist+1 ;
        cout<<ans<<endl;

    }
    
      
    return 0;
}