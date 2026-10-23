#include <iostream>
using namespace std;
int main()
{
    string time;
    cout << "Enter the time in 12 hour format:" << endl;
    cin >> time;
    string shift = time.substr(8, 2);
    string hour = time.substr(0, 2);
    cout << "Shift is:" << shift << endl;
    cout << "Hour is:" << hour << endl;
    if (shift == "am" && hour == "12")
    {
        time.replace(0, 2, "00");
    }
    else if (shift == "pm" && hour != "12")
    {
        int h = stoi(hour);
        h += 12;
        time.replace(0, 2, to_string(h));
    }

    cout << "The time in 24 hour format is:" << time.substr(0, 8) << endl;
    return 0;
}