#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,m;
    cin>>n,m;
    vector<set<int>tie(n+1);
    while(m--)
    {
        cin>>a,b;
        tie[a].insert(b);
        tie[b].insert(a);

    }
    int g=0;
    while(1)
    {
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(tie[i]==1)
                v.insert(i);
        }
        for (int i=0;i<(int) v.size();i++)
        {
            set<int>::iterator it=tie [v[i]].begin();
            tie[v[i]].clear();
            tie[*it]erase(v[i]);
        }
        if(v.size())
        {
            g++;
        }
        else
            break;

    }
    cout<<g;
}
