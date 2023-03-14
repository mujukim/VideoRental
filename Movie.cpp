// Movie.cpp
#include "Movie.h"

const int Movie::CHILDRENS;
const int Movie::REGULAR;
const int Movie::NEW_RELEASE;
const int Movie::EXAMPLE_GENRE;

Movie::Movie(const std::string& title, int priceCode) :
    movieTitle(title),
    moviePriceCode(priceCode)
{
    switch (priceCode)
    {
    case Movie::NEW_RELEASE:
        genreTitle      = "new_release";
        nBasicCost      = 0.0;
        nOverCost       = 3.0;
        nDayDefaulted   = 0.0;
        break;
    case Movie::CHILDRENS:
        genreTitle      = "childrens";
        nBasicCost      = 1.5;
        nOverCost       = 1.5;
        nDayDefaulted   = 3.0;
        break;
    case Movie::EXAMPLE_GENRE:
        genreTitle      = "example_genre";
        nBasicCost      = 0.0;
        nOverCost       = 2.0;
        nDayDefaulted   = 0.0;
        break;
    case Movie::REGULAR:
    default:
        genreTitle      = "regular";
        nBasicCost      = 2.0;
        nOverCost       = 1.5;
        nDayDefaulted   = 2.0;
        break;
    }
}

double Movie::getRentalCost(int daysRanted) const
{
    double retval = 0.0;
    if (daysRanted <= nDayDefaulted)
        retval = nBasicCost;
    else
        retval = nBasicCost + (daysRanted - nDayDefaulted) * nOverCost;

    return retval;
}

int Movie::getFrequentRenterPoints(int dayRanted) const
{
    int retPoint = 0;
    switch (moviePriceCode)
    {
    case Movie::NEW_RELEASE:
        if (dayRanted > 1) 
            retPoint = 2;
        else
            retPoint = 1;
        break;

    case Movie::CHILDRENS:
    case Movie::EXAMPLE_GENRE:
    case Movie::REGULAR:
        retPoint = 1;
        break;
   
    default:
        break;
    }
    return retPoint;
}