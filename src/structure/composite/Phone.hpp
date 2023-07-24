#ifndef PHONE_HPP
#define PHONE_HPP

#include <memory>
#include <string>
#include <vector>
#include <iostream>
#include "IComposite.hpp"

class Phone : public IComposite{
public:
    Phone(uint32_t price);
    uint32_t execute() override;
    void add(std::shared_ptr<IComposite> comp) override;
    void remove(std::shared_ptr<IComposite> comp) override;

private:
    uint32_t price_;
};

#endif