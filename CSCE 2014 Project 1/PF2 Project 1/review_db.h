//-----------------------------------------------------------
//  Purpose:    Declaration of ReviewDB class.
//  Author:     Edgar Alcocer
//-----------------------------------------------------------
#ifndef REVIEW_DB_H
#define REVIEW_DB_H

#include "review.h"

//----------------------------------------------
class ReviewDB
{
public:
  // Constructors
  ReviewDB();
  ReviewDB(const ReviewDB & reviewDB);
  ~ReviewDB();

  // Methods
  void insertReview();
  void printRestaurant();
  void printCategory();
  void printRecent();
  
private:
  //variables and arrays
  int count;
  static const int SIZE = 20;
  Review reviews[SIZE];
};
#endif