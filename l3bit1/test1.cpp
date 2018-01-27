    #include<bits/stdc++.h>
    using namespace std;
    int f(vector<int>&A)
    {
        sort(A.begin(),A.end());
      for(int i=0;i<A.size()-1;i++)
    {
       cout<<A[i]<<endl;
    }
    int mn=INT_MAX;
    for(int i=0;i<A.size()-1;i++)
    {
        if(A[i]^A[i+1]<mn)
        {
            mn=A[i]^A[i+1];
        }
    }
    return mn;

    }
    int main()
    {

        vector<int>a;
        a.push_back(12);
        a.push_back(4);
        a.push_back(6);
        a.push_back(2);
        cout<<f(a);
    }
