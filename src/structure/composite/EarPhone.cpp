#include "EarPhone.hpp"

EarPhone::EarPhone(uint32_t price) : price_(price)
{
    std::cout << "EarPhone construct with price: " << price_ << std::endl;
}

uint32_t EarPhone::execute()
{
    std::cout << "EarPhone::execute()~" << std::endl;
    return price_;
}

void EarPhone::add(std::shared_ptr<IComposite> comp)
{
    std::cout << "EarPhone::add() no realize~" << std::endl;
}

void EarPhone::remove(std::shared_ptr<IComposite> comp)
{
    std::cout << "EarPhone::remove() no realize~" << std::endl;
}
