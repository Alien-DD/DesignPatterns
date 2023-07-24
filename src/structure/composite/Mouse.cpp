#include "Mouse.hpp"

Mouse::Mouse(uint32_t price) : price_(price)
{
    std::cout << "Mouse construct with price: " << price_ << std::endl;
}

uint32_t Mouse::execute()
{
    std::cout << "Mouse::execute()~" << std::endl;
    return price_;
}

void Mouse::add(std::shared_ptr<IComposite> comp)
{
    std::cout << "Mouse::add() no realize~" << std::endl;
}

void Mouse::remove(std::shared_ptr<IComposite> comp)
{
    std::cout << "Mouse::remove() no realize~" << std::endl;
}
