#ifndef PROFILE_ITERATOR_HPP
#define PROFILE_ITERATOR_HPP

#include <memory>
#include "../collections/Profile.hpp"

class IProfileIterator{
    virtual std::shared_ptr<Profile> begin() = 0;
    virtual std::shared_ptr<Profile> end() = 0;
    virtual std::shared_ptr<Profile> next() = 0;
};

#endif