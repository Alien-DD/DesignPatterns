#ifndef BASE_DECORATOR_HPP
#define BASE_DECORATOR_HPP

#include <memory>
#include "Notifier.hpp"

enum class NotifyType
{
    QQ,
    SMS,
    WeChat
};

class BaseDecorator : public Notifier
{
public:
    BaseDecorator(std::shared_ptr<Notifier> notifier);
    void send(std::string message) override;
    NotifyType getNotifyType();

protected:
    std::shared_ptr<Notifier> notifier_;
    NotifyType type_;
};

#endif
