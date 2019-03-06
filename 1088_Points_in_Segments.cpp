#include <bits/stdc++.h>

using namespace std;
int ara[100006];

int lowerbound( int n,int target)
{
    int lo=0,hi=n;
    while(lo<hi)
    {
        int md=(lo+hi)/2;
        if(ara[md]<target)
            lo=md+1;
        else
            hi=md;
    }
    return lo;
}
int upperbound(int n,int target)
{
   int lo=0,hi=n;
    while(lo<hi)
    {
       int md=(lo+hi)/2;
        if(ara[md]<=target)
            lo=md+1;
        else
            hi=md;
    }
    return lo;
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
      int n,q;
      scanf("%d %d",&n,&q);
      for(int j=0;j<n;j++)
            scanf("%d",&ara[j]);
      printf("Case %d:\n",i);
      while(q--)
      {
          int a,b;
          scanf("%d %d",&a,&b);
          int x=lowerbound(n,a);
          int y=upperbound(n,b);
          printf("%d\n", y-x);
      }
    }

}
