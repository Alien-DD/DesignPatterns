#include "BaseDecorator.hpp"

BaseDecorator::BaseDecorator(std::shared_ptr<Notifier> notifier)
    : notifier_(notifier)
{
    std::cout << __func__ << " construct~" << std::endl;
}

void BaseDecorator::send(std::string message)
{
    notifier_->send(message);
}

NotifyType BaseDecorator::getNotifyType()
{
    return type_;
}
