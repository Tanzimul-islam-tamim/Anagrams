#include <iostream>
#include <string>
using namespace std;

int main(){

string a;string b; int len;int lenb;int x=0; string s;
cin>>a;cin>>b;
len = a.length();lenb = b.length();

for(int i=0;i<len;i++){s[i]='0';}

if(len==lenb){
for(int i=0;i<len;i++ ){
    for(int j=0; j<lenb;j++){
        if( a[i]==b[j]){b[j]='0';a[i]='0';}
    }
}

for(int i = 0; i<lenb;i++){

if(s[i]==b[i]){x++;}
else{cout<<"No";}
}
if(x==len){cout<<"Yes";}
}else{cout<<"No";}

return 0;
}
