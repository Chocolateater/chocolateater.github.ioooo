#include <bits/stdc++.h>
using namespace std;
int n,cnt;
char s[110];
void dfs(int pos,int bal){
    if(cnt>1000){
        return ;
    }
    if(bal<0){
        return ;
    }
    if(pos==2*n){
        if(b==0){
            for(int j=0;j<2*n;j++){
                cout<<s[j];
            }
            cnt++;
            cout<<endl;
        }
    }
    else{
        s[pos]='(';
        dfs(pos+1,bal+1);
        s[pos]=')';
        if(bal>0){
            dfs(pos+1,bal-1);
        }
    }
}
int main(){
    cin>>n;
    dfs(0,0);
    return 0;
}