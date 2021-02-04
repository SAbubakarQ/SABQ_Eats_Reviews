// Bismillah-AbubakarQ
//-----------------------------------------------------------
//  Purpose:                    Decleration of Review Class
//  Author:                     S. Abubakar Qasim
//-----------------------------------------------------------
//  Source Code:                Implementation of Book class.
//  Author of Source Code:      John Gauch
//-----------------------------------------------------------

#include "review.h"

// Review.h is done now to implement the reveiw.cpp 

// Constructor 
Review::Review()
{
   Reviewer = "";
   Restaurant = "";
   Food_Category = "";
   DelivCost = 0.00;
   DelRating = 0; // 1 - 10 
   Food_Qual = "";
   Overall_Sat = "";

   // cout << "Constructor\n"; // Comment out when finished
   
} 

// Destructor 
Review::~Review()
{
   // cout << "Destructor\n"; // Comment out when finished
}



////////////////// GET METHODS //////////////////

string Review::getNameReviewer()
{
   return Reviewer;
}

string Review::getRestaurantName()
{
   return Restaurant;
}

string Review::getFoodCategory()
{
   return Food_Category;
}

float Review::getDeliveryCost()
{
   return DelivCost;
}

int Review::getDel_Rating()
{
   return DelRating;
}

string Review::getFood_Qual()
{
   return Food_Qual;
}

string Review::getOverall_Satisfaction()
{
   return Overall_Sat;
}



////////////////// SET METHODS //////////////////

void Review::setNameReviewer(string reviewerName)
{
   Reviewer = reviewerName;
}

void Review::setRestaurantName(string restaurantName)
{
   Restaurant = restaurantName;
}

void Review::setFoodCategory(string foodCateg)
{
   Food_Category = foodCateg;
}

void Review::setDeliveryCost(float costDelivery)
{
   DelivCost = costDelivery;
}

void Review::setDel_Rating(int rating)
{
   DelRating = rating;
}

void Review::setFood_Qual(string foodQual)
{
   Food_Qual = foodQual;
}

void Review::setOverall_Satisfaciton(string OverallSatisfaction)
{
   Overall_Sat = OverallSatisfaction;
}

void Review::Print()
{
   cout << "Reviewer Name: " << "\t\t" << Reviewer << endl
        << "Restaurant Name: " << "\t" << Restaurant << endl
        << "Food Category: " << "\t\t" << Food_Category << endl
        << "Delivery Cost: " << "\t\t" << DelivCost << endl
        << "Delivery Rating: " << "\t" << DelRating << " out of 10" << endl
        << "Food Quality: " << "\t\t" << Food_Qual << endl
        << "Overall Satisfaction: " << "\t" << Overall_Sat << endl << endl;

}