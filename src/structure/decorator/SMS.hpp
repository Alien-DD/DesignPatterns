#ifndef SMS_HPP
#define SMS_HPP

#include "BaseDecorator.hpp"

class SMS : public BaseDecorator
{
public:
    SMS(std::shared_ptr<Notifier> notifier);
    void send(std::string message) override;
};

#endif
