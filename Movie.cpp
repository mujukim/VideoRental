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
        genreTitle = "new_release";
        break;
    case Movie::CHILDRENS:
        genreTitle = "childrens";
        break;
    case Movie::EXAMPLE_GENRE:
        genreTitle = "example_genre";
        break;
    case Movie::REGULAR:
    default:
        genreTitle = "regular";
        break;
    }
}