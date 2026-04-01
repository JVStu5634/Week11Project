// Name: Joseph Valdez
// Date: 3/31/2026
// File: main.cpp
// Purpose: This is the entry point. All user interaction happens here.

#include <iostream>
#include <iomanip>
#include <string>
#include "grades.h"
#include "stats.h"

using namespace std;

int main()
{
  string studentName;
  const int MAX_SCORES = 5;

  double score;
  double total = 0.0;
  int count = 0;

cout << "Enter student name: ";
cin >> studentName;
cout << endl;

while (count < MAX_SCORES) {

    cout << "Enter up to 5 scores or -1 to stop: ";
    cin >> score;

if (score == -1) {
    break;
}

if (score < 0 || score > 100) {
    cout << "Error: Score must be between 0 and 100." << endl;
    continue;
}

total += score;
count++;
}

if (count == 0) {
    cout << "No scores entered." << endl;
    return 1;
}

double computeAverage(double total, int count) {
  if (count == 0) {
      return 0.0;
  }
  return total / count;
}
    
