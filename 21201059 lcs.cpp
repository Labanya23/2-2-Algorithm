#include<bits/stdc++.h>
using namespace std;
int lcs(string s1, string s2, int m, int n)
{
    int dp[m+1][n+1];
    int i,j;
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0||j==0)
                dp[i][j]=0;
            else if (s1[i-1]==s2[j-1])
               {
                    dp[i][j]=dp[i-1][j-1]+1;
                cout<<"dp ["<<i<<"]"<<"["<<j<<"] = "<<dp[i][j]<<"\t";
               }
            else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                cout<<"dp ["<<i<<"]"<<"["<<j<<"] = "<<dp[i][j]<<"\t";
                }

        }
        cout<<endl;
    }
    return dp[m][n];
}

int main()
{
    string s1,s2;
    cout<<"Enter 1st Sequence: ";
    cin>>s1;
    cout<<"Enter 2nd Sequence: ";
    cin>>s2;

    int m=s1.size();
    int n=s2.size();

    cout<<"Length = "<<lcs(s1,s2,m,n);
    return 0;

}

