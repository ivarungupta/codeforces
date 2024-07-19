#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    int s1=0,s2=0,s3=0,s4=0,s5=0,s6=0;
    cin>>a>>b>>c;
    s1=a+b*c;
    s2=a*(b+c);
    s3=a*b*c;
    s4=(a+b)*c;
    s5=a+b+c;
    s6=(a*b)+c;

//    if (s1>s2 && s1>s3 && s1>s4 && s1>s5 && s1>s6)
//    {
//     cout<<s1;
//    }
//    if (s2>s1 && s2>s3 && s2>s4 && s2>s5 && s2>s6)
//    {
//     cout<<s2;
//    }
//    if (s3>s1 && s3>s2 && s3>s4 && s3>s5 && s3>s6)
//    {
//     cout<<s3;
//    }
//    if (s4>s1 && s4>s2 && s4>s3 && s4>s5 && s4>s6)
//    {
//     cout<<s4;
//    }
//    if (s5>s1 && s5>s2 && s5>s3 && s5>s6 && s5>s4)
//    {
//     cout<<s5;
//    }
//    if (s6>s1 && s6>s2 && s6>s3 && s6>s5 && s6>s4)
//    {
//     cout<<s6;
//    }
int arr[6]={s1,s2,s3,s4,s5,s6};
sort(arr,arr+6);

cout<<arr[5];
return 0;
}