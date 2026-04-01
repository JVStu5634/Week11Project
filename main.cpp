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
  int average;

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

double computeAverage(double total, int count, int average) {
  if (count == 0) {
      return 0.0;
  }
  return average = total / count;
}
char getLetterGrade(int score) {
  if (score >= 90) {
    return LetterGrade::A;
  }
  else if (score >= 80) {
    return LetterGrade::B;
  }
  else if (score >= 70) {
    return LetterGrade::C;
  }
  else if (score >= 60) {
    return LetterGrade::D;
  }
  else {
    return LetterGrade::F;
  }
}
char gradeToChar(LetterGrade grade) {
  switch (grade) {
case LetterGrade::A:
    return 'A';
case LetterGrade::B:
    return 'B';
case LetterGrade::C:
    return 'C';
case LetterGrade::D:
    return 'D';
case LetterGrade::F:
    return 'F';
default: 
  return '?';
  }
}

    
