#include <bits/stdc++.h>
using namespace std;

int main(){

   vector<int>v(9,100);
   v.push_back(500);
//    v.emplace_back(600,200);
   cout<<*(v.begin())<<endl;
   cout<<v.back()<<endl;
   v.erase(v.end()-1);
   v.insert(v.begin(),1001);
   v.insert(v.begin()+1,3,2002);
    for(auto it:v){
    cout<<it<<" ";
   }
cout<<v.size();
}