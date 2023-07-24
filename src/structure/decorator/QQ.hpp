#ifndef QQ_HPP
#define QQ_HPP

#include "BaseDecorator.hpp"

class QQ : public BaseDecorator
{
public:
    QQ(std::shared_ptr<Notifier> notifier);
    void send(std::string message) override;
};

#endif
