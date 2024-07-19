#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int rating;
        cin>>rating;
        if (1900<=rating)
        {
            cout<<"Division 1"<<endl;
        }
        if (1600<=rating && rating<=1899)
        {
            cout<<"Division 2"<<endl;
        }
        if (1400<=rating && rating<=1599)
        {
            cout<<"Division 3"<<endl;
        }
        if (rating<=1399)
        {
            cout<<"Division 4"<<endl;
        }

    }
    return 0;
}