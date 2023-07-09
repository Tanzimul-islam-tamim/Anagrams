#include <iostream>
#include <string>
#include <math.h>
using namespace std;




int main(){
//Okay so the main plan is we will check each word in string a separately in string b;
// for each word found we must remove that word from string a as there might be more than one same word.
// And use int x as the validifier. If x equates to the length of the string then it will be an anagram.
//for each word found in a of b x will increment by 1.


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

//for(int i = 0; i<lenb;i++){cout<<b[i];}
//cout<<"s are"<<endl;
//for(int i = 0; i<lenb;i++){cout<<s[i];}

return 0;
}

