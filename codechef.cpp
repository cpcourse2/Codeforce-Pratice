// Problem Link : https://www.codechef.com/START69D/problems/CHEFDINE

// Approach :  In this problem I am doing so and so..


#include<bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
     int n,k;
     cin>>n>>k;
     int a[n],b[n];
     map<int, int>mappy;
     for(int i=0; i<n; i++){
         cin>>a[i];
         mappy[a[i]]=INT_MAX;
     }
     for(int i=0; i<n; i++)
     cin>>b[i];
     if(mappy.size()<k){
         cout<<-1<<endl;
         continue;
     }
         for(int i=0; i<n; i++)
         mappy[a[i]]=min(b[i], mappy[a[i]]);
         vector<int>annsy;
         for(auto i:mappy)
         annsy.push_back(i.second);
         sort(annsy.begin(), annsy.end());
         long long total=0;
         for(int i=0; i<k; i++)
         total+=annsy[i];
         cout<<total<<endl;
}
return 0;
}
