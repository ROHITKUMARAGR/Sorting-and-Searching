//Implemented by Rok!-AGR
//Keep Calm and Jai Shree Ram
#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define all(n) n.begin(),n.end() 
#define vec vector<int>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vp(it,arr)  for(auto it:arr){cout<<it<<;}
#define LOOP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
struct comp{
    bool
}


int main(){
int i;
cin>>i;
vector<int>arr(i);
for(int a=0;a<i;a++){
    cin>>arr[a];
}
// Sorting using the standard library comparator function in ascending order
sort(arr.begin(),arr.end(),greater<int>());
for(int c=0;c<i;c++){
    cout<<arr[c];
}


// Sorting using the lambda expression 
sort(arr.begin(),arr.end(),[](int a,int b){return a>b;});
for(int b=0;b<i;b++){
    cout<<arr[b]<<" ";
}

return 0;
}