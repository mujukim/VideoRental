// Customer.cc
#include <sstream>
#include <vector>
#include "Customer.h"

using std::ostringstream;
using std::vector;

std::string Customer::statement(bool detail)
{
  double totalAmount = 0.;
  int frequentRenterPoints = 0;

  std::vector< Rental >::iterator iter = customerRentals.begin();
  std::vector< Rental >::iterator iter_end = customerRentals.end();

  // result will be returned by statement()
  std::ostringstream result;
  result << "Rental Record for " << getName() << "\n";

  double thisAmount = 0.; // for문안에서 매 번 변수를 생성할 필요 없음.
  // Loop over customer's rentals
  for ( ; iter != iter_end; ++iter ) {

    // Determine amounts for each rental
    thisAmount = iter->getRentalCost();
    totalAmount += thisAmount;

    // Add frequent renter points
    frequentRenterPoints += iter->getFrequentRenterPoints();

    // Show figures for this rental
    if (detail)
    {
        result << "\t" << iter->getMovie().getGenreTitle()
            << "\t" << iter->getMovie().getTitle()
            << "\t" << iter->getDaysRented()
            << "\t" << thisAmount << std::endl;
    }
    else
    {
        result << "\t" << iter->getMovie().getTitle()
            << "\t" << thisAmount << std::endl;
    }
  }

  // Add footer lines
  result << "Amount owed is " << totalAmount << "\n";
  result << "You earned " << frequentRenterPoints
         << " frequent renter points";

  return result.str();
}
