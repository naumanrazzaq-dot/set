#include<iostream>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<set>
using namespace std;
int main(){
 //in set duplicate values cannot be store
    set <int> s;
   
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(6);
 
  // this values cannot bs stored because it is already in set
  // in set values print in sorted order
     s.insert(1);
    s.insert(4);
    s.insert(2);
    for(auto val:s){
        cout<<val<<" ";
    }
    cout<<endl;
  cout<< "size is : "<<s.size()<<endl; //  s will become zero because i swap it with s2 and s2 was empty
   

   
}