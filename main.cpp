// Bismillah-AbubakarQ
//-----------------------------------------------------------
//  Purpose:                    main.cpp for Review Class
//  Author:                     S. Abubakar Qasim
//-----------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

#include "review_db.h"
void menuOptions();
void menuOptions2();

int main() 
{
    Review_DB ReviewDB;

    menuOptions();
    string input;
    int choice = 0;
    cout << "Choice: ";
    getline(cin , input);
    choice = atoi(input.c_str());
    while (choice <= 5 && choice >= 0)
        {
            if (choice == 1)
                {
                   ReviewDB.insertReview();
                   cout << "\nThank you for the Reivew!\n";
                   menuOptions2();
                }
            else if (choice == 2)
                {
                    ReviewDB.printRestaurant();
                }
            else if (choice == 3)
                {
                    ReviewDB.printCategory();
                }
            else if (choice == 4)
                {
                    ReviewDB.printRecent();
                }
            else if (choice == 5)
                {
                    ReviewDB.PrintAll();
                }
            else if (choice == 0)
                {
                    cout << "\nThank you for using SABQ Eats! Have a nice day.\n\n";
                    return 0;
                }

            cout << "Choice: ";
            getline(cin , input);
            choice = atoi(input.c_str());
        }

    /*
    /// TEST SET METHODS ///
    Review Rahat;
    Rahat.setNameReviewer("Rahat \"THE MARK\"");
    Rahat.setRestaurantName("Chick Fil A");
    Rahat.setFoodCategory("Burgers");
    Rahat.setDeliveryCost(7.95);
    Rahat.setDel_Rating(8);
    Rahat.setFood_Qual("Food was delicious and well prepared.");
    Rahat.setOverall_Satisfaciton("Was happy with the overall delviery and service.");
    /// TEST GET METHODS ///
    cout << Rahat.getNameReviewer();
    cout << endl;
    cout << Rahat.getRestaurantName();
    cout << endl;
    cout << Rahat.getFoodCategory();
    cout << endl;
    cout << Rahat.getDeliveryCost();
    cout << endl;
    cout << Rahat.getDel_Rating();
    cout << endl;
    cout << Rahat.getFood_Qual();
    cout << endl;
    cout << Rahat.getOverall_Satisfaction();
    cout << endl;
    Rahat.Print();
    */
    




}