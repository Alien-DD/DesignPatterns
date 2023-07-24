#ifndef ORIGINATOR_HPP
#define ORIGINATOR_HPP

#include <memory>
#include "Memento.hpp"

class Originator{
public:
    Originator(bool state);
    virtual ~Originator() = default;
    bool getState();
    void setState(bool state);
    std::shared_ptr<Memento> save();
    void restore(std::shared_ptr<Memento> memo);

private:
    bool state_;
};

#endif