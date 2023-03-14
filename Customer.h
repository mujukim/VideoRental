// Customer.hh
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "Rental.h"

// The customer class represents the customer of the store

class Customer {
public:
  Customer();
  explicit Customer( const std::string& name );

  void addRental( const Rental& arg );
  std::string getName() const;

  // Generate a statement for the customer
  std::string statement(bool detail = false); // detail = false, 출력방식 (영화이름, 대여금) / = true, 출력방식 (장르, 영화이름, 대여일자, 대여금) 

private:
  std::string customerName;
  std::vector< Rental > customerRentals;

};


inline Customer::Customer() {}

inline Customer::Customer( const std::string& name ): 
  customerName( name ) {}

inline void Customer::addRental( const Rental& arg ) { customerRentals.push_back( arg ); }

inline std::string Customer::getName() const { return customerName; }

#endif // CUSTOMER_HH
