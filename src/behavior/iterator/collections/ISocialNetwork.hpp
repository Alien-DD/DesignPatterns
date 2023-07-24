#include <string>
#include "../iterators/IProfileIterator.hpp"

class IProfileIterator;
class ISocialNetwork{
    virtual IProfileIterator* createFriendsIterator(std::string profileId) = 0;
    virtual IProfileIterator* createCoworkersIterator(std::string profileId) = 0;
};