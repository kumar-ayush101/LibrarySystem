#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

enum class BookStatus {
     AVAILABLE,
     LOANED,
     RESERVED,
     LOST
};

enum class AccountStatus {
     ACTIVE,
     CLOSED,
     CANCELLED,
     BLACKLISTED
};

#endif