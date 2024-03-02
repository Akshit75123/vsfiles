
#include<bits/stdc++.h>
using namespace std;
 
signed main(){
    int T,t,nt,sm;
    bool tr;
    cin>>T;
    while(T--)
        {string s;
        cin>>s;
        t=1,nt=1e9,sm=0;tr=1;
        for (int i = 0; i < s.size(); ++i)
        {
            if(s[i]=='+')
            {++sm;}
            else if(s[i]=='-')
            {   --sm;
                if(sm<nt){nt=1e9;}
                if(sm<t){t=max(sm,1);}
            }
            else if(s[i]=='0')
            {
                if(sm<=t){tr=0;}
                nt=min(nt,sm);
            }
            else
            {
                if(nt<=sm)
                {tr=0;}
                t=max(sm,1);
            }
        }
        (tr)?cout<<"YES"<<endl:cout<<"NO"<<endl;}}