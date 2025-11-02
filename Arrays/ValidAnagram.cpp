#include <iostream>
#include <string>
using namespace std;
bool Anagram(string& s, string& t){
    if(s.length()!=t.length()) return false;
    unordered_map<char,int> h1;
    for(int i=0;i<s.length();i++){
        h1[s[i]]++;
        h1[t[i]]--;
    }
   
    for(auto& it :h1){
        if(it.second !=0) return false;
    }
    return true;


}
int main() {
    string s = "rat";
    string t = "car";
    cout<<Anagram(s,t);
    return 0;

}