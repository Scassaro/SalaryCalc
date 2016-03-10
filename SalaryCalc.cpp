/*
Calculates gross pay based on hours worked.
Author: Stephen Cassaro
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
  cout << "This program calculates your gross pay over a week. More to come later.\n";
  cout << endl;
  int DaysWorked = 0;
  string InitialInput;
  cout << "Enter how many days you worked this week: ";
  cin >> InitialInput;
  if(isdigit(InitialInput))
    DaysWorked = atoi(InitialInput);
  else
    cout << "That was not a valid integer. Please try again.\n";
  int HoursWorkedInDay = 0;
  int HoursWorkedInWeekTotal = 0;
  int OTHours = 0;
  int NormalHours = 0;
  for(int i = DaysWorked; i > 0; i--)
    {
      cout << "How long did you work on day " << i << "?: ";
      cin
    }
}
