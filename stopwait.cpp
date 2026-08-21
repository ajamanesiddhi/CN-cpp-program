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

        cout << "\nTimer started...";

        this_thread::sleep_for(chrono::seconds(1));

        cout << "\nReceiver: Frame " << i << " received";
        cout << "\nReceiver: Sending ACK " << i;

        cout << "\nSender: ACK " << i << " received";
        cout << "\nTimer stopped.";

        cout << "\n";
    }

    cout << "\nAll frames transmitted successfully.";

    return 0;
}