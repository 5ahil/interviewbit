#include<bits/stdc++.h>
using namespace std;
vector<string> fun(vector<string>&a,int k)
{
    vector<string> re;int n=a.size();
    int i=0;string ss;
    int cnt;int space=0;
    while(i<n)
    {
        ss=a[i];i++;
        int j=i;space=0;cnt=ss.length();space=0;
        while(i<n && cnt+1+a[i].length()<=k)
        {
            cnt+=(1+a[i].length());
            i++;space++;
        }
        if(space==0||i==n)
        {
           if(space==0)
           {
                int k1=0;
                while(k1<k-a[i-1].length())
                {
                    ss+=" ";
                    k1++;
                }

           }
           else
           {
               int k1=0;
                while(space--)
                {
                    ss+=" ";
                    ss+=a[j++];
                }
                int pp=ss.length();
                while(k1<k-pp)
                {
                    ss+=" ";
                    k1++;
                }

           }
        }
        else
        {
            int tab_size=(k-cnt)/space;
            int remaining = k-cnt-tab_size*space;
            string tab="";
            int k1=0;
            while(k1<tab_size)
            {
                tab+=" ";
                k1++;
            }
            while(space--)
            {
                ss+=(" "+tab);
                if(remaining>0)
                {
                    ss+=" ";
                    remaining--;
                }
                ss+=a[j++];
            }

        }
        re.push_back(ss);
            ss="";
    }
    return re;
}
int main()
{
    vector<string> a;
    a.push_back("what");
    a.push_back("must");
    a.push_back("be");
    a.push_back("shall");
    a.push_back("be");
    //a.push_back("text");
    //a.push_back("justification");
    vector<string> ans=fun(a,12);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }

}
