//
// Created by Antonin Durchanek on 2019-03-24.
//


#ifndef TESTS_NOELEMENTATINDEXEXCEPTION_HPP
#define TESTS_NOELEMENTATINDEXEXCEPTION_HPP


#include "RuntimeException.hpp"
class OutOfBoundsException : public RuntimeException
{

public:
    OutOfBoundsException(std::string message)
            : RuntimeException(message) {}

};

#endif //TESTS_NOELEMENTATINDEXEXCEPTION_HPP


