#include <bits/stdc++.h>
using namespace std;
void pattern_matching(string s, string p){
    int ls = s.length();
    int lp = p.length();
    int max = ls-lp+1;

    bool flag = true,found=false;
    for(int i = 0; i<max; i++){
        flag = true;
        for(int j = 0; j<lp && flag == true; j++){
            if(p[j]!=s[j+i]){
                flag = false;
            }
        }
        if(flag == true){
            cout << "Pattern found at position: " << i+1 << endl;
            found = true;
        }
    }
    if(!found){
         cout << "No pattern found" << endl;
    }
}
int main(){
    pattern_matching("12345678", "678") ;
    return 0;
}