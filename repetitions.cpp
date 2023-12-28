#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string seq;
    cin>>seq;
    int max=0;
    int x=seq.length();
    for(int j=0;j<x-2;j++)
    for(int i=0;i<x-2;i++){
        int c=0;
        if(seq[i]==seq[i+1])
        c++;

    }
        if(max<=(c+1))
    max=c+1;

    }
    
}
