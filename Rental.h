// Rental.hh
#ifndef RENTAL_H
#define RENTAL_H
#include "Movie.h"

class Rental {
public:
  Rental( const Movie& movie, int daysRented );

  int getDaysRented() const;
  const Movie& getMovie() const;
  double getRantalCost() const;

private:
  Movie rentedMovie;
  int nDaysRented;
  double nCostRental;
};

inline Rental::Rental( const Movie& movie, int daysRented ):
	rentedMovie( movie ),
	nDaysRented( daysRented ),
	nCostRental( movie.getRentalCost(daysRented) ) {}

inline int Rental::getDaysRented() const { return nDaysRented; }

inline const Movie& Rental::getMovie() const { return rentedMovie; }

inline double Rental::getRantalCost() const { return nCostRental; }
#endif // RENTAL_H
