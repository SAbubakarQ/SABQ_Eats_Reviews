// Bismillah-AbubakarQ
//-----------------------------------------------------------
//  Purpose:                    Decleration of Review Class
//  Author:                     S. Abubakar Qasim
//-----------------------------------------------------------
//  Source Code:                Implementation of Book class.
//  Author of Source Code:      John Gauch
//-----------------------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

class Review
{
  public:
  // Constructors 
  Review();
  ~Review();
  void Print();

  // Get Methods
  string getNameReviewer();
  string getRestaurantName();
  string getFoodCategory();
  float  getDeliveryCost();
  int    getDel_Rating();
  string getFood_Qual();
  string getOverall_Satisfaction();
  
  // Set Methods
  void setNameReviewer(string reviewerName);
  void setRestaurantName(string restaurantName);
  void setFoodCategory(string foodCateg);
  void setDeliveryCost(float costDelivery);
  void setDel_Rating(int rating);
  void setFood_Qual(string foodQual);
  void setOverall_Satisfaciton(string OverallSatisfaction);

  private:
  // Private Variables
  string Reviewer;
  string Restaurant;
  string Food_Category;
  float DelivCost;
  int DelRating;
  string Food_Qual;
  string Overall_Sat;

};