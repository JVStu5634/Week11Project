// Name: Joseph Valdez
// Date: 3/31/2026
// File: grades.cpp
// Purpose: This file defines the two functions declared in grades.h.

#include "grades.h"

char getLetterGrade(int average) {
  if (average >= 90) {
    return LetterGrade::A;
  }
  else if (average >= 80) {
    return LetterGrade::B;
  }
  else if (average >= 70) {
    return LetterGrade::C;
  }
  else if (average >= 60) {
    return LetterGrade::D;
  }
  else {
    return LetterGrade::F;
  }
}
char grade = getLetterGrade();
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
char Lettergrade = gradeToChar();
