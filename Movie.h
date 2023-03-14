// Movie.hh
#ifndef MOVIE_H
#define MOVIE_H
#include <string>

class Movie {
public:
  static const int CHILDRENS   = 2;
  static const int REGULAR     = 0;
  static const int NEW_RELEASE = 1;
  static const int EXAMPLE_GENRE = 3;

  Movie( const std::string& title, int priceCode = REGULAR ); // 내용이 길어져 인라인함수 미사용, movie.cpp에 구현.

  int getPriceCode() const;
  void setPriceCode( int arg );
  double getRentalCost(int daysRanted) const;
  std::string getTitle() const;
  std::string getGenreTitle() const; 

private:
  std::string movieTitle;
  std::string genreTitle; 
  int moviePriceCode;

  // 대여금
  // 기본 대여 기간 이내, 대여금 = 기본금
  // 기본 대여 기간 초과, 대여금 = 기본금 + (대여 기간 - 기본 대여기간) * 추가금
  double nBasicCost; // 기본금
  double nOverCost; // 추가금(기간에 비례)
  double nDayDefaulted;  // 기본 대여기간

};

inline int Movie::getPriceCode() const { return moviePriceCode; }

inline void Movie::setPriceCode( int arg ) { moviePriceCode = arg; }

inline std::string Movie::getTitle() const { return movieTitle; }

inline std::string Movie::getGenreTitle() const { return genreTitle; }

#endif // MOVIE_H
