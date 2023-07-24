#include "WeChat.hpp"

WeChat::WeChat(std::shared_ptr<Notifier> notifier)
    : BaseDecorator(notifier)
{
    std::cout << __func__ << " construct~" << std::endl;;
}

void WeChat::send(std::string message)
{
    type_ = NotifyType::WeChat;
    notifier_->send(message);
    std::cout << "WeChat send message: " << message << std::endl;
}