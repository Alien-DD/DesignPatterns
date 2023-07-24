#include "SMS.hpp"

SMS::SMS(std::shared_ptr<Notifier> notifier)
    : BaseDecorator(notifier)
{
    std::cout << __func__ << " construct~" << std::endl;;
}

void SMS::send(std::string message)
{
    type_ = NotifyType::SMS;
    notifier_->send(message);
    std::cout << "SMS send message: " << message << std::endl;
}