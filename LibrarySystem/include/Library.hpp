#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include<map>
#include<bits/stdc++.h>
#include "Book.hpp"

class Library{
  private:
    std::string name;
    std::map<std::string,BookItem*>inventory;
    Library() : name("Central Library") {}
  public:
    static Library& getInstance() {
      static Library instace;
      return instace;
    }
    void addBook(BookItem* item, std::string barcode){
      inventory[barcode] = item;
    }
    void displayAllBooks() {
        for(auto const& [barcode, item] : inventory) {
            std::cout << "Title: " << item->getTitle() << " | Barcode: " << barcode << "\n";
        }
    }
};

#endif