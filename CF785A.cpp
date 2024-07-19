#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,c=0;
    string polyhedron;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>polyhedron;
     if (polyhedron=="Tetrahedron")
    {
        c+=4;
    }
     else if (polyhedron=="Cube")
    {
        c+=6;
    }
     else if (polyhedron=="Octahedron")
    {
        c+=8;
    }
     else if (polyhedron=="Dodecahedron")
    {
        c+=12;
    }
     else if (polyhedron=="Icosahedron")
    {
        c+=20;
    }
    }
    cout<<c;
    return 0;
    
}