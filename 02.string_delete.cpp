/*
Delete(text,position,length)
Delete("ABCDEFGHI",4,2) = "ABCFGHI"
    = "ABC" || "FGHI"
Delete(T,K,L) = substring(T,1,k-1) || substring(T,k+L,length(T)-(k+L)+1)
*/
#include <bits/stdc++.h>
using namespace std;
void delete_in_string(string T, int k, int L){
    string result="";
    for(int i=0; i<k-1; i++){
        result+=T[i];
    }
    for(int j = k+L-1; j<T.length(); j++){
        result+=T[j];
    }
    cout << result;
}
int main(){
    delete_in_string("ABCDEFGHI",4,2);
    return 0;
}