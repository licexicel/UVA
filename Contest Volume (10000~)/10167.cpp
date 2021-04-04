#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
//A B [-500,500]
struct Line
{
    int A,B;
};
struct Point
{
    int x,y;
}pool[100];

int test(Line l, int n)
{
    int positive=0;
    int negative=0;
    // #{>0}  -  #{<0}
    for(int i=0; i< (n<<1);i++)
    {
        if(l.A*pool[i].x + l.B*pool[i].y > 0)
            positive++;
        else
        if(l.A*pool[i].x + l.B*pool[i].y < 0)
            negative++;
    }
    if(positive+negative==(n<<1))
        return positive-negative;
    else
        return -1;
}

Line getCakeCut(int n)
{
    Line empty = {0,0};
    Line ans;

    for(int a=-500; a<=500; a++)
        for(int b=-500; b<=500; b++)
        {
            ans.A=a;
            ans.B=b;
            if(test(ans,n)==0)
                return ans;
        }
    return empty;
}

int main()
{
    int n;
    while(cin>>n,n)
    {

        for(int i=0; i< (n<<1); i++)
            cin >> pool[i].x >> pool[i].y;
        Line ans = getCakeCut(n);
        printf("%d %d\n",ans.A,ans.B);
    }
}
