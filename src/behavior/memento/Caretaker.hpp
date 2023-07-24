#ifndef CARETAKER_HPP
#define CARETAKER_HPP

#include <vector>
#include <memory>
#include "Memento.hpp"
#include "Originator.hpp"

class Caretaker{
public:
    Caretaker(std::shared_ptr<Originator> ori);
    virtual ~Caretaker() = default;
    void backup();
    void undo();

private:
    std::vector<std::shared_ptr<Memento>> memoVec_;
    std::shared_ptr<Originator> original_;
};

#endif