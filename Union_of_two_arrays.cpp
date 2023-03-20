#include<iostream>
#include<vector>
#include<set>
using namespace std;

int doUnion(vector<int>&a,vector<int>&b){
    set<int> st;
    for(auto val: a){
        st.insert(val);
    }
    for(auto val: b){
        st.insert(val);
    }
    return st.size();
}

int main(){
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {1,2,3};
    cout<<doUnion(a,b)<<endl;
    return 0;
}
