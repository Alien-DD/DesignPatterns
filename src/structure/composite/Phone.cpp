#include "Phone.hpp"

Phone::Phone(uint32_t price) : price_(price)
{
    std::cout << "Phone construct with price: " << price_ << std::endl;
}

uint32_t Phone::execute()
{
    std::cout << "Phone::execute()~" << std::endl;
    return price_;
}

void Phone::add(std::shared_ptr<IComposite> comp)
{
    std::cout << "Phone::add() no realize~" << std::endl;
}

void Phone::remove(std::shared_ptr<IComposite> comp)
{
    std::cout << "Phone::remove() no realize~" << std::endl;
}
