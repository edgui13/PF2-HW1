//-----------------------------------------------------------
//  Purpose:    Implementation of ReviewDB class.
//  Author:     Edgar Alcocer
//-----------------------------------------------------------
#include "review.h"
#include "review_db.h"

int main()
{
    // declare variables
    bool initialize;
    int selection;

    // declare class objects
    Review review;
    ReviewDB reviewDB;

    // Display menu
    do
    {
        cout << "Welcome to Food Delivery Review!!!" << endl;
        cout << "<><><><><><><><><><><><><><><><><><><>" << endl;
        cout << "1. Insert a review" << endl;
        cout << "2. Search reviews based on restaurant" << endl;
        cout << "3. Search reviews based on category" << endl;
        cout << "4. Search the N most recent reviews" << endl;
        cout << "5. To exit the program" << endl;
        cin >> selection;

        if (selection <= 0 || selection > 6)
        {
            cout << "Error!, please select an option between 1-4" << endl;
        }

        switch (selection)
        {
        case 1:
        {
            reviewDB.insertReview();
            break;
        }
        case 2:
        {
            reviewDB.printRestaurant();
            break;
        }
        case 3:
        {
            reviewDB.printCategory();
            break;
        }
        case 4:
        {
            reviewDB.printRecent();
            break;
        }
        case 5:
        {
            cout << "Thank you for using Food Delivery Review!!!" << endl;
            break;
        }
        }
    } while (selection != 5);

    return 0;
}