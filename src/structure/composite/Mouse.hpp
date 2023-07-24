#ifndef MOUSE_HPP
#define MOUSE_HPP

#include <memory>
#include <string>
#include <vector>
#include <iostream>
#include "IComposite.hpp"

class Mouse : public IComposite{
public:
    Mouse(uint32_t price);
    uint32_t execute() override;
    void add(std::shared_ptr<IComposite> comp) override;
    void remove(std::shared_ptr<IComposite> comp) override;

private:
    uint32_t price_;
};

#endif