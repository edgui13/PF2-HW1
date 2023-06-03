//-----------------------------------------------------------
//  Purpose:    Implementation of ReviewDB class.
//  Author:     Edgar Alcocer
//-----------------------------------------------------------
#include "review_db.h"
#include "review.h"
#include <iostream>

//-----------------------------------------------------------
// Constructor
//-----------------------------------------------------------
ReviewDB::ReviewDB ()
{
  count = 0;
}

//-----------------------------------------------------------
// Copy Constructor
//-----------------------------------------------------------
ReviewDB::ReviewDB (const ReviewDB & reviewDB)
{
  for (int i = 0; i < SIZE; i++)
    {
      reviews[i] = reviewDB.reviews[i];
    }
  count = reviewDB.count;
}

//-----------------------------------------------------------
// Destructor
//-----------------------------------------------------------
ReviewDB::~ReviewDB ()
{
  count = 0;
}

//-----------------------------------------------------------
// insert review objects into the array
//-----------------------------------------------------------
void ReviewDB::insertReview ()
{
    Review review;
    string reviewerName;
    string restaurantName;
    string category;
    float cost;
    int deliveryTime;
    int foodQuality;
    int overall;
    
    cout << "Enter reviewer name" << endl;
    cin >> reviewerName;
    review.setReviewerName(reviewerName);
        
    
    cout << "Enter restaurant name" << endl;
    cin >> restaurantName;
    review.setRestaurantName(restaurantName);
                
  
    cout << "Enter food category" << endl;
    cin >> category;
    review.setCategory(category);
                
    
    cout << "Enter cost of food" << endl;
    cin >> cost;
    review.setCost(cost);
                
    
    cout << "Enter delivery time" << endl;
    cin >> deliveryTime;
    review.setDeliveryTime(deliveryTime);
                
    
    cout << "Enter food quality form 1 - 10" << endl;
    do
    {
    cin >> foodQuality;
    }while(foodQuality <= 0 ||foodQuality > 10);
    review.setFoodQuality(foodQuality);
                
    
    cout << "Enter overall quality of delivery from 1 - 10" << endl;
    do{
    cin >> overall;
    }while(overall <= 0 || overall > 10);
    review.setOverall(overall);

    if(count == SIZE)
    {
        cout << "Error!, max amount of reviews stored!" << endl;
    }
    else
    {
        reviews[count] = review;
        count++;
    }
}

//-----------------------------------------------------------
// print reviews from specific restaurant
//-----------------------------------------------------------
void ReviewDB::printRestaurant()
{
   //declare the restaurant you want to Search
   string restaurantName = "";
   cout << "Please enter the restaurant you would like to search"<< endl;
   cin >> restaurantName;
   for (int i = 0; i < count && i < SIZE; i++)
   {
       if(reviews[i].getRestaurantName() == restaurantName)
       {
          reviews[i].Print();
       }
   }
} 
        
//-----------------------------------------------------------
// print reviews from specific category
//-----------------------------------------------------------
void ReviewDB::printCategory()
{
    //declare the category you want to Search
   string category = "";
   cout << "Please enter the category you would like to search"<< endl;
   cin >> category;
   for (int i = 0; i < count && i < SIZE; i++)
   {
       if(reviews[i].getCategory() == category)
       {
          reviews[i].Print();
       }
   }
}

//-----------------------------------------------------------
// Print the n most recent reviews
//-----------------------------------------------------------
void ReviewDB::printRecent()
{
    int amount;
    cout << "Please enter the N amount of recent reviews you would like see" << endl;
    cin >> amount;
    for(int i = amount -1; i >= 0; i--)
    {
        if(i <= count)
        {
            reviews[i].Print();
            cout << endl;
        }
    }
}