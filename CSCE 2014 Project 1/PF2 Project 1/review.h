//-----------------------------------------------------------
//  Purpose:    Declaration of Review class.
//  Author:     Edgar Alcocer
//-----------------------------------------------------------
#ifndef REVIEW_H
#define REVIEW_H
#include <iostream>
using namespace std;

class Review
{
public:
    // Constructors
    Review();
    Review(string reviewerName, string restaurantName, string category, float cost, int deliveryTime, int foodQuality, int Overall);
    Review(const Review &review);
    ~Review();

    // Methods
    string getReviewerName() const;
    string getRestaurantName() const;
    string getCategory() const;
    float getCost() const;
    int getDeliveryTime() const;
    int getFoodQuality() const;
    int getOverall() const;

    void setReviewerName(string ReviewerName);
    void setRestaurantName(string restaurantName);
    void setCategory(string category);
    void setCost(float cost);
    void setDeliveryTime(int deliveryTime);
    void setFoodQuality(int foodQuality);
    void setOverall(int overall);
    void Print() const;

private:
    string ReviewerName;
    string RestaurantName;
    string Category;
    float Cost;
    int DeliveryTime;
    int FoodQuality;
    int Overall;
};

#endif