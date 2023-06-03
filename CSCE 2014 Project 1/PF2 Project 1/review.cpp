//-----------------------------------------------------------
//  Purpose:    Implementation of Review class.
//  Author:     Edgar Alcocer
//-----------------------------------------------------------
#include "review.h"

//----------------------------------------------
Review::Review()
{
    ReviewerName = "";
    RestaurantName = "";
    Category = "";
    Cost = 0;
    DeliveryTime = 0;
    FoodQuality = 0;
    Overall = 0;
}

//----------------------------------------------
Review::Review(string reviewerName, string restaurantName, string category, float cost, int deliveryTime, int foodQuality, int Overall)
{
}

//----------------------------------------------
Review::Review(const Review &review)
{
    ReviewerName = review.ReviewerName;
    RestaurantName = review.RestaurantName;
    Category = review.Category;
    Cost = review.Cost;
    DeliveryTime = review.DeliveryTime;
    FoodQuality = review.FoodQuality;
    Overall = review.Overall;
}

//----------------------------------------------
Review::~Review()
{
}

//----------------------------------------------
string Review::getReviewerName() const
{
    return ReviewerName;
}
//----------------------------------------------
string Review::getRestaurantName() const
{
    return RestaurantName;
}
//----------------------------------------------
string Review::getCategory() const
{
    return Category;
}
//----------------------------------------------
float Review::getCost() const
{
    return Cost;
}
//----------------------------------------------
int Review::getDeliveryTime() const
{
    return DeliveryTime;
}
//----------------------------------------------
int Review::getFoodQuality() const
{
    return FoodQuality;
}
//----------------------------------------------
int Review::getOverall() const
{
    return Overall;
}
//----------------------------------------------

void Review::setReviewerName(string reviewerName)
{
    ReviewerName = reviewerName;
}
//---------------------------------------------
void Review::setRestaurantName(string restaurantName)
{
    RestaurantName = restaurantName;
}
//----------------------------------------------
void Review::setCategory(string category)
{
    Category = category;
}
//----------------------------------------------
void Review::setCost(float cost)
{
    Cost = cost;
}
//----------------------------------------------
void Review::setDeliveryTime(int deliveryTime)
{
    DeliveryTime = deliveryTime;
}
//----------------------------------------------
void Review::setFoodQuality(int foodQuality)
{
    FoodQuality = foodQuality;
}
//--------------------------------------------
void Review::setOverall(int overall)
{
    Overall = overall;
}
//----------------------------------------------
void Review::Print() const
{
    cout << "Reviewer's Name: " << ReviewerName << "\n";
    cout << "Restaurant Name: " << RestaurantName << "\n";
    cout << "Category: " << Category << "\n";
    cout << "Cost: " << Cost << "\n";
    cout << "Delivery Time " << DeliveryTime << "\n";
    cout << "Quality: " << FoodQuality << "\n";
    cout << "Overall Score: " << Overall << "\n";
}