#ifndef BOX_HPP
#define BOX_HPP

#include <memory>
#include <string>
#include <vector>
#include <iostream>
#include "IComposite.hpp"

class Box : public IComposite{
public:
    uint32_t execute() override;
    void add(std::shared_ptr<IComposite> comp) override;
    void remove(std::shared_ptr<IComposite> comp) override;
    std::vector<std::shared_ptr<IComposite>> getChildren();

private:
    std::vector<std::shared_ptr<IComposite>> composites_;
};

#endif