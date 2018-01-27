#include<bits/stdc++.h>
using namespace std;
int f(string s1,string s2)
{
    int n1=s1.length();
    int n2=s2.length();
    int i=0;int j=0;
    while(i<n1||j<n2)
    {
        int nm1=0,nm2=0;
        while(i<n1&&s1[i]=='0')i++;
        while(j<n2&&s2[j]=='0')j++;
        if(i==n1||j==n2)
        {
            //cout<<"line15\n";
            if(j!=n2)
            {
                if(s2[j]!='.')  //s1 finished and s2 having one more digit
                {
                    return -1;
                }
                else
                {
                    j++;
                }
            }
            else if(i!=n1)
            {
                if(s1[i]!='.')
                {
                    return 1;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                return 0;
            }
        }
        else if(s1[i]=='.'||s2[j]=='.')
        {
            if(s2[j]!='.')
            {
                return -1;
            }
            else if(s1[i]!='.')
            {
                return 1;
            }
            else
            {
                i++;j++;
            }

        }
        else
        {
            int rr=0;
            if(s1[i]>s2[j])rr=1;
            else if(s1[i]<s2[j])rr=-1;
            i++;j++;
            while(i<n1&&j<n2 &&s1[i]!='.' && s2[j]!='.')
            {
                if(rr==0)
                {
                    if(s1[i]>s2[j])rr=1;
                    else if(s1[i]<s2[j])rr=-1;
                }
                i++;j++;
            }
            //cout<<rr<<" "<<i<<" "<<j<<" "<<n1<<" "<<n2<<endl;
            if(i==n1||j==n2)
            {
                if(j!=n2)
                {
                    //cout<<"here\n";
                    //if(rr!=0)return rr;
                    if(s2[j]=='.')
                    {
                        if(rr!=0)return rr;
                        j++;
                    }
                    else
                    {
                        return -1;
                    }
                    //j++;
                    //cout<<"not\n";
                }
                else if(i!=n1)
                {
                    if(s1[i]=='.')
                    {
                        if(rr!=0)return rr;
                        i++;
                    }
                    else
                    {
                        return 1;
                    }
                    //i++;
                }
                else
                {
                    return rr;
                }
            }
            else if(s1[i]=='.' || s2[j]=='.')
            {
                if(s1[i]!='.')
                {
                    return 1;
                }
                else if(s2[j]!='.')
                {
                    return -1;
                }
                else{
                    if(rr!=0)return rr;
                    i++;j++;
                }
            }
        }
    }
    return 123456;
}
int main()
{
    string s1="2869";
    string s2="6";
    int a=f(s1,s2);
    cout<<a;
}
