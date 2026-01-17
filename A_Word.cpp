#include<bits/stdc++.h>
using namespace std;
int main(){
    int upercase=0;
    int lowercase=0;
        string s;
        cin >> s;
        for ( char c:s)
        {
            if(isupper(c))
            upercase++;
        else 
            lowercase++;
        }   
            if(upercase>lowercase){
            for(char &c:s)
            c=toupper(c);
            }
            else{
            for(char &c:s)
            c=tolower(c);
        }
        
        cout<<s<<endl;
    }