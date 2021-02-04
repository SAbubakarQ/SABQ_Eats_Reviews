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

#include "review_db.h"

//-----------------------------------------------------------
// Constructor
//-----------------------------------------------------------
Review_DB::Review_DB()
{
   count = 0;
}

//-----------------------------------------------------------
// Destructor
//-----------------------------------------------------------
Review_DB::~Review_DB()
{
   count = 0;
}

//-----------------------------------------------------------
// Print All 
//-----------------------------------------------------------
void Review_DB::PrintAll()
{
   for (int i = 0; i < count; i++)
      reviews[i].Print();
}

//-----------------------------------------------------------
// Menu Options (Outside of Class ReviewsDB)
//-----------------------------------------------------------
void menuOptions()
{
   cout << "\nWelcome to SABQ Eats Delivery Service!\n\n"
         << "What would you like to do today?\n"
         << "Menu Options: \n"
         << "\t1.....Submit a review. \n"
         << "\t2.....Look up a review by Restaurant. \n"
         << "\t3.....Look up a review by food Category. \n"
         << "\t4.....See the most recent reviews. \n"
         << "\t5.....See all reviews. \n"
         << "\t0.....Quit\n"
         << endl << endl;
}

//-----------------------------------------------------------
// Menu Options2 (Outside of Class ReviewsDB)
//-----------------------------------------------------------
void menuOptions2()
{
   cout  << "What would you like to do next?\n"
         << "Menu Options: \n"
         << "\t1.....Submit another review. \n"
         << "\t2.....Look up a review by Restaurant. \n"
         << "\t3.....Look up a review by food Category. \n"
         << "\t4.....See the most recent reviews. \n"
         << "\t5.....See all reviews. \n"
         << "\t0.....Quit\n"
         << endl << endl;
}

//-----------------------------------------------------------
// Insert Review 
//-----------------------------------------------------------
void Review_DB::insertReview()
{
      string str;
      float flt = 0.0;
      int rating = 0;

      cout << "Enter Name: ";
      getline(cin, str);
      reviews[count].setNameReviewer(str);
      cout << "Enter Restaurant Name: ";
      getline(cin, str);
      reviews[count].setRestaurantName(str);
      cout << "Enter Food Category: ";
      getline(cin, str);
      reviews[count].setFoodCategory(str);
      cout << "Delivery Cost Amount: ";
      getline(cin, str);
      flt = atof(str.c_str());
      reviews[count].setDeliveryCost(flt);
      while (rating <= 0 || rating > 10)
         {
            cout << "Rate Service 1 to 10: ";
            getline(cin, str);
            rating = atoi(str.c_str());

            if (rating <= 10 && rating >= 1)
               reviews[count].setDel_Rating(rating);
            else
               cout << "-Invalid input-\n";
         }
      cout << "Describe quality of food: \n";
      cout << "\t";
      getline(cin, str);
      reviews[count].setFood_Qual(str);
      cout << "Breifely describe your overall satisfaction: \n";
      cout << "\t";
      getline(cin, str);
      reviews[count].setOverall_Satisfaciton(str);
      count++;
}

//-----------------------------------------------------------
// Print Restaurant via Search
//-----------------------------------------------------------
void Review_DB::printRestaurant()
{
   cout << "Enter the name of the Restaurant you'd like to see reviews from. \n"
        << "\t Restaurant Name: ";
   string search;
   getline(cin, search);

   // Search restaurant array for matching data
   for (int i = 0; i < count; i++)
   {
      if (search == reviews[i].getRestaurantName())
         reviews[i].Print();
   }
}

//-----------------------------------------------------------
// Print Restaurant via Search
//-----------------------------------------------------------
void Review_DB::printCategory()
{
   cout << "Enter the Category of Food you'd like to see reviews from. \n"
        << "\t Category: ";
   string search;
   getline(cin, search);

   // Search category array for matching data
   for (int i = 0; i < count; i++)
   {
      if (search == reviews[i].getFoodCategory())
         reviews[i].Print();
   }
}

//-----------------------------------------------------------
// Print Recent Reviews via Search
//-----------------------------------------------------------
void Review_DB::printRecent()
{
   string str;
   int n;
   // Display the recent reviews:
   cout << "Enter the amount of recent reviews you'd like to see.\n"
        << "\tNumber of Reviews: ";
   getline(cin, str);
   n = atoi(str.c_str());
   for (int i = count-1; i >= (count - n); i--)
   {
      reviews[i].Print();
   }
}

