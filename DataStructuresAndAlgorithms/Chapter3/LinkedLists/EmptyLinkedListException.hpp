//
// Created by Antonin Durchanek on 2019-03-27.
//

#ifndef TESTS_EMPTYLINKEDLISTEXCEPTION_HPP
#define TESTS_EMPTYLINKEDLISTEXCEPTION_HPP


#include "RuntimeException.hpp"
class EmptyLinkedListException : public RuntimeException
{

public:

    std::string getError() const {return err;}
    EmptyLinkedListException(std::string message)
            : RuntimeException(message) {}

};


#endif //TESTS_EMPTYLINKEDLISTEXCEPTION_HPP
