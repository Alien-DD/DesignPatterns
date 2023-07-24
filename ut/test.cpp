#include <string>
#include <memory>
#include <gtest/gtest.h>
#include "structure/decorator/QQ.hpp"
#include "structure/decorator/SMS.hpp"
#include "structure/decorator/WeChat.hpp"

TEST(DecoratorTest, notifierSendTest)
{
    auto notifier = std::make_shared<Notifier>();
    auto qq = std::make_shared<QQ>(notifier);
    auto wechat = std::make_shared<WeChat>(qq);
    wechat->send("aabbccdd");
    EXPECT_TRUE(wechat->getNotifyType() == NotifyType::WeChat);
}
