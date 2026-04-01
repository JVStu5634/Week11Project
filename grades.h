// Name: Joseph Valdez
// Date: 3/31/2026
// File: grades.h
// Purpose: Define an enum called LetterGrade with values A, B, C, D, F. Declare a function called getLetterGrade and 
// declare a function called getLetterGrade and  a function called gradeToChar that takes a LetterGrade and returns a char.

#ifndef GRADES_H
#define Grades_H

enum class LetterGrade { 
A,
B,
C,
D,
F
};

LetterGrade getLettergrade(int score);

char gradeToChar(LetterGrade grade);

#endif
