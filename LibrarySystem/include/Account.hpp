#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include<string>
#include<iostream>

class Account{
   protected:
    std::string id;
    std::string name;
    std::string email;
   public:
   Account(std::string id, std::string name) : id(id) , name(name) {}
   virtual void getDisplayPermissions() = 0;
   virtual ~Account() {}
};

class Member: public Account {
   private:
   int totalBooksCheckedOut = 0;
   public:
   using Account::Account;
   void getDisplayPermissions() override{
    std::cout<<"Member Access : Search Books, View My Loans.\n";
   }
   void reserveItem(){
    std::cout<<"Item Reserved by "<<name<<"\n";
   }
};

class Librarian : public Account{
    public:
       using Account::Account;
       void getDisplayPermissions() override{
        std::cout<<"Librarian Access: Add/Remove Books, Block Members";
       }
       void addBookItem(){
        std::cout<<"Librarian"<<name<<"added a book";
       }
};

#endif