#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n==0||n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int c=0,d=0,e=0;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='+')
        {
            c++;
        }
        else
        {
            c--;
        }


    }
    for (int i=0;i<s2.size();i++)
    {
        if(s2[i]=='+')
            d++;
        else if(s2[i]=='-')
            d--;
        if(s2[i]=='?')
            e++;
    }
    if(e==0)
    {
        if(c==d)
            printf("1,000000000000");
        else
            printf("0.000000000000");
    }
    else
    {
        int i=e+(c-d);
        if(i%2==0&&i/2>=0&&i/2<=e)
        {
            int ans=fact(e)/(fact(e-i/2)*fact(i/2));
            printf("%0.12f",double(ans)/double(pow(2,e)));
        }
        else
        {
            printf("0.000000000000");
        }
    }

}
