#include "Box.hpp"

uint32_t Box::execute()
{
    uint32_t sum = 0;
    std::cout << "Box::execute()~" << std::endl;
    for (auto comp : composites_)
    {
        sum += comp->execute();
    }
    return sum;
}

void Box::add(std::shared_ptr<IComposite> comp)
{
    std::cout << "Box::add()~" << std::endl;
    composites_.emplace_back(comp);
}

void Box::remove(std::shared_ptr<IComposite> comp)
{
    std::cout << "Box::remove()~" << std::endl;
}

std::vector<std::shared_ptr<IComposite>> Box::getChildren()
{
    std::cout << "Box::getChildren()~" << std::endl;
    return composites_;
}