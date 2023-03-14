// Rental.hh
#ifndef RENTAL_H
#define RENTAL_H
#include "Movie.h"

class Rental {
public:
  Rental( const Movie& movie, int daysRented );

  int getDaysRented() const;
  const Movie& getMovie() const;
  double getRentalCost() const;
  double getFrequentRenterPoints() const;

private:
  Movie rentedMovie;
  int nDaysRented;
  double dCostRental;
  int nFrequentRenterPoints;
};

inline Rental::Rental( const Movie& movie, int daysRented ):
	rentedMovie( movie ),
	nDaysRented( daysRented ),
	dCostRental( movie.getRentalCost(daysRented) ),
	nFrequentRenterPoints ( movie.getFrequentRenterPoints(daysRented)){}

inline int Rental::getDaysRented() const { return nDaysRented; }

inline const Movie& Rental::getMovie() const { return rentedMovie; }

inline double Rental::getRentalCost() const { return dCostRental; }

inline double Rental::getFrequentRenterPoints() const { return nFrequentRenterPoints; }
#endif // RENTAL_H
