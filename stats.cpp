// Name: Joseph Valdez
// Date: 3/31/2026
// File: stats.cpp
// Purpose: This file defines the function declared in stats.h.

#include "stats.h"

double computeAverage(double total, int count) {
  if (count == 0) {
      return 0.0;
  }
  return total / count;
}
