#include "QQ.hpp"

QQ::QQ(std::shared_ptr<Notifier> notifier)
    : BaseDecorator(notifier)
{
    std::cout << __func__ << " construct~" << std::endl;;
}

void QQ::send(std::string message)
{
    type_ = NotifyType::QQ;
    notifier_->send(message);
    std::cout << "QQ send message: " << message << std::endl;
}