#ifndef SOCIAL_SPAMMER_HPP
#define SOCIAL_SPAMMER_HPP

#include <string>
#include "../iterators/IProfileIterator.hpp"

class SocialSpammer{
    void send(IProfileIterator* iterator, std::string message)
    {
        while(iterator->begin() != iterator->end())
        {
            auto profile = iterator->next();
            std::cout << profile->getEmail() << ": " << message << std::endl;
        }
    }
};

#endif