#include<iostream>
using namespace std;
void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (d<b)
    {
        cout<<-1;
        return;
    }
    else if (c>(a+d-b))
    {
        cout<<-1;
        return;
    }
    
    cout<<d-b-c+a+d-b;

}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
        cout<<endl;
    }
    
}