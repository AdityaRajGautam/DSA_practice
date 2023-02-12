#include<iostream>
using namespace std;

string removeDuplicates(string s){
    string s1;
    
    for(int i=0;i<s.length();i++){
        if (s1.back()==s[i]){
            s1.pop_back();
        }
        else{
            s1.push_back(s[i]);
        }
    }
    return s1;
}

// string removeDuplicates(string s) {
        
//         int i=1;
//         string ans; // stores the answer string
        
//         ans.push_back(s[0]); // pushes the first char of the given string
//         while(i<s.length())
//         {
//             if(ans.empty() == 0)
//             {
//                 if(ans.back()==s[i]) // checking the char present in the ans == presenti in s
//                 {
//                     ans.pop_back(); // removing the char
//                 }
//                 else
//                 {
//                     ans.push_back(s[i]); // pushing the char
//                 }
//             }
//             else
//             {
//                 ans.push_back(s[i]); // if the ans is empty
//             }
//             i++; // incremenet 
//         }
//         return ans;
//     }

// string removeDuplicates(string s) {
        
//         string ans;
        
//         for(int i = 0 ; i < s.size() ; i++)
//         {
//             if(ans.size() && ans.back() == s[i])
//                 ans.pop_back();
//             else
//                 ans.push_back(s[i]);
//         }
        
//         return ans;
//     }

int main(){
    string s;
    cin>>s;

    cout<<removeDuplicates(s)<<endl;
}