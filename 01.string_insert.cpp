/*
Insert(Text, Position, String)
Insert("ABCDEFG",3,"XYZ") = "ABXYZCDEFG"
    = "AB" || "XYZ" || "CDEFG"
Insert(T,K,S) = substring(T,1,k-1) || S || substring(T,k,length(T)-k+1)
*/
#include <bits/stdc++.h>
using namespace std;
void insert_in_string(string T, int k, string S){
    string result="";
    for(int i=0; i<k-1; i++){
        result+=T[i];
    }
    result+=S;
    for(int j = k-1; j<=T.length(); j++){
        result+=T[j];
    }
    cout << result;
}
int main(){
    insert_in_string("ABCDEFG",3,"XYZ");
    return 0;
}