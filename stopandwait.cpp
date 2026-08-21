#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of frames: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout << "\nSender: Sending Frame " << i;
        this_thread::sleep_for(chrono::milliseconds(100));

        cout << "\nReceiver: Frame " << i << " received";
        this_thread::sleep_for(chrono::milliseconds(100));

        cout << "\nReceiver: Sending ACK " << i;
        this_thread::sleep_for(chrono::milliseconds(100));

        cout << "\nSender: ACK " << i << " received";
        this_thread::sleep_for(chrono::milliseconds(100));
    }

    cout << "\n\nAll frames transmitted successfully.";

    return 0;
}