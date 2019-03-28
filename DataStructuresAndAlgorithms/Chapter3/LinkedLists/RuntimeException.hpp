//
// Created by Antonin Durchanek on 2019-03-22.
//

#ifndef TESTS_RUNTIMEEXCEPTION_HPP
#define TESTS_RUNTIMEEXCEPTION_HPP


#include <string>


class RuntimeException

{


public:
    RuntimeException(std::string message)
            : err(message) {}

    std::string getError() const {return err;}


    std::string err;


};



#endif //TESTS_RUNTIMEEXCEPTION_HPP