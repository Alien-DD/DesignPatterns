#ifndef ICOMPOSITE_HPP
#define ICOMPOSITE_HPP

#include <memory>
#include <string>
#include <iostream>

class IComposite{
public:
    virtual uint32_t execute() = 0;
    virtual void add(std::shared_ptr<IComposite> comp) = 0;
    virtual void remove(std::shared_ptr<IComposite> comp) = 0;
};

#endif