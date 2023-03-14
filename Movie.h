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

  Movie( const std::string& title, int priceCode = REGULAR ); // ������ ����� �ζ����Լ� �̻��, movie.cpp�� ����.

  int getPriceCode() const;
  void setPriceCode( int arg );
  double getRentalCost(int daysRanted) const;
  std::string getTitle() const;
  std::string getGenreTitle() const; 

private:
  std::string movieTitle;
  std::string genreTitle; 
  int moviePriceCode;

  // �뿩��
  // �⺻ �뿩 �Ⱓ �̳�, �뿩�� = �⺻��
  // �⺻ �뿩 �Ⱓ �ʰ�, �뿩�� = �⺻�� + (�뿩 �Ⱓ - �⺻ �뿩�Ⱓ) * �߰���
  double nBasicCost; // �⺻��
  double nOverCost; // �߰���(�Ⱓ�� ���)
  double nDayDefaulted;  // �⺻ �뿩�Ⱓ

};

inline int Movie::getPriceCode() const { return moviePriceCode; }

inline void Movie::setPriceCode( int arg ) { moviePriceCode = arg; }

inline std::string Movie::getTitle() const { return movieTitle; }

inline std::string Movie::getGenreTitle() const { return genreTitle; }

#endif // MOVIE_H
