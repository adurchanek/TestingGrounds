//
// Created by Antonin Durchanek on 2019-03-22.
//

#ifndef TESTS_OUTOFBOUNDSEXCEPTION_HPP
#define TESTS_OUTOFBOUNDSEXCEPTION_HPP

#include "RuntimeException.hpp"
class OutOfBoundsException : public RuntimeException
{

public:
    OutOfBoundsException(std::string message)
    : RuntimeException(message) {}

};


#endif //TESTS_OUTOFBOUNDSEXCEPTION_HPP
