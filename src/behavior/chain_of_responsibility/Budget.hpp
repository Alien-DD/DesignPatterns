#ifndef BUDGET_HPP
#define BUDGET_HPP

#include <memory>
#include <string>
#include <vector>
#include "BaseHandler.hpp"

class Budget : public BaseHandler{
public:
    Budget(uint32_t budget);
    uint32_t getBudget();
    void setBudget(uint32_t budget);
    bool handle(std::shared_ptr<Request> request, std::shared_ptr<Product> product) override;

private:
    std::uint32_t budget_;
};

#endif