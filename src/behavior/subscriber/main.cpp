#include <iostream>
#include <string>
#include <vector>
#include <gtest/gtest.h>
#include "dialog/AuthenticationDialog.hpp"

TEST(SubscriberTest, normalFunctionTest)
{
    std::vector<std::string> userLists = {"1234", "abc", "admin"};

    AuthenticationDialog* authDialog = new AuthenticationDialog(userLists);

    authDialog->loginOrRegisterChkBx_->check();
    // EXPECT_EQ(authDialog->loginUsername_->getText(), "admin");
    // EXPECT_EQ(authDialog->loginPassword_->getText(), "admin123");
    authDialog->okBtn_->click();
    authDialog->cancelBtn_->keypress();
    // EXPECT_TRUE(authDialog->loginUsername_->getText().empty());
    // EXPECT_TRUE(authDialog->loginPassword_->getText().empty());
    std::cout << "==============================================\n" << std::endl;

    authDialog->loginOrRegisterChkBx_->checked = false;
    authDialog->loginOrRegisterChkBx_->check();
    authDialog->okBtn_->click();
    authDialog->cancelBtn_->keypress();
}