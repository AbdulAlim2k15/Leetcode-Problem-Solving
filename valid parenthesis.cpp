#include<iostream>
#include<stdio.h>
#include <string>
#include<stack>
using namespace std;

bool isValid(string s){
   stack<char> st;
   int i;
   int len = s.length();
   for(i=0; i<len; i++){
        if(s[i] == '('||s[i] == '{'||s[i] == '['){
            st.push(s[i]);
        }
        else if(s[i] == ')'||s[i] == '}'||s[i] == ']'){
            if(st.empty()){
                return false;
            }
            else if(s[i] == ')' && st.top()!='('){
                return false;
            }
             else if(s[i] == '}' && st.top()!='{'){
                return false;
            }
            else if(s[i] == ']' && st.top()!='['){
                return false;
            }
            else{
                st.pop();
            }
        }
   }
   if(st.empty()){
    return true;
   }
   else{
    return false;
   }


};
int main(){
    string str = "()";
    for(int i=0; str[i]!='\0'; i++){
        cout<<str[i];
    }
    bool result = isValid(str);
    cout<<result;

}
