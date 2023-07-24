#ifndef MEMENTO_HPP
#define MEMENTO_HPP

class Memento{
public:
    Memento(bool state);
    virtual ~Memento() = default;
    bool getState();

private:
    bool state_;
};

#endif