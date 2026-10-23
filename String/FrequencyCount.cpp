#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<char,int> freq;
    string s="banana";
    for(char c:s)
    {
        freq[c]++;
    }
    for(auto it:freq)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}