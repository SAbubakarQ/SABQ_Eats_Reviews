// Bismillah-AbubakarQ
//-----------------------------------------------------------
//  Purpose:                    Declaration of Review_DB class. 
//  Author:                     S. Abubakar Qasim
//-----------------------------------------------------------
//  Source Code:                Declaration of Library class.
//  Author of Source Code:      John Gauch
//-----------------------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

#ifndef review_h
#define review_h

#include "review.h"

const int SIZE = 100;

class Review_DB
{
 public:
   // Constructors
   Review_DB();
   ~Review_DB();

   // Methods
   void insertReview(); // Done
   void printRestaurant(); // Done
   void printCategory(); // Done
   void printRecent(); // Done
   void PrintAll(); // Done
 private:
   int count;
   Review reviews[SIZE];
};
#endif
