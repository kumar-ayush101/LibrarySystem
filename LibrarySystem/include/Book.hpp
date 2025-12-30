#ifndef BOOK_HPP
#define BOOK_HPP
#include<string>
#include "Constants.hpp"

class Book{
  protected:
  std::string isbn;
  std::string title;
  std::string author;

  public:
  Book(std::string i, std::string t, std::string a)  
  : isbn(i) , title(t) , author(a) {}
  //getter functions
  std::string getTitle() const {return title;}
  std::string getISBN() const {return isbn;}
};

class BookItem : public Book {
  private:
    std::string barcode;
    double price;
    BookStatus status;

  public:
    BookItem(std::string i, std::string t, std::string a, std::string b, double p) : Book(i,t,a), barcode(b), price(p), status(BookStatus::AVAILABLE) {}

    void updateStatus(BookStatus newStatus){
      status = newStatus;
    }
    BookStatus getStatus() const{
      return status;
    }
};


#endif