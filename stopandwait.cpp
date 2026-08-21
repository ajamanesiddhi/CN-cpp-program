#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of frames:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"\nSender:Sending frame"
        <<i;
        cout<<"\nReceiver:frame"<<i<<
        "received";
        cout<<"\nReceiver:Sending ACK"
        <<i;
        cout<<"\nSender:ACK"<<i<<
        "received";
    }
    cout<<"\n\nAll frames transmitted successfully.";
    return 0;
}