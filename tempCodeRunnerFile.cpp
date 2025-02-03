#include <iostream>
using namespace std;

class Time {
   int hours, minutes, seconds;

public:
   // Constructor
   Time() {
      cout << "Enter the hours, minutes, and seconds (with space): ";
      cin >> hours >> minutes >> seconds;
      if ((hours < 0 || hours > 23) || (minutes < 0 || minutes > 59) || (seconds < 0 || seconds > 59)) {
         cout << "This is invalid time." << endl;
         hours = minutes = seconds = 0; // Set to default valid time
      }
   }

   // Display method
   void display() const {
      if (hours < 10) cout << "0";
      cout << hours << ":";
      if (minutes < 10) cout << "0";
      cout << minutes << ":";
      if (seconds < 10) cout << "0";
      cout << seconds << endl;
   }
};

int main() {
   Time t;
   t.display();
   return 0;
}
