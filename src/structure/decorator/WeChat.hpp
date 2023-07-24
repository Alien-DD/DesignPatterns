#ifndef WECHAT_HPP
#define WECHAT_HPP

#include "BaseDecorator.hpp"

class WeChat : public BaseDecorator
{
public:
    WeChat(std::shared_ptr<Notifier> notifier);
    void send(std::string message) override;
};

#endif
