#include <iostream>
#include <string>
#include <vector>
#include <gtest/gtest.h>
#include "dialog/AuthenticationDialog.hpp"

TEST(MediatorTest, normalFunctionTest)
{
    std::vector<std::string> userLists = {"1234", "abc", "admin"};

    AuthenticationDialog* authDialog = new AuthenticationDialog(true, userLists);

    auto okBtn = new Button(authDialog);
    auto cancelBtn = new Button(authDialog);
    auto loginOrRegisterChkBx = new Checkbox(authDialog, true);
    authDialog->okBtn_ = okBtn;
    authDialog->cancelBtn_ = cancelBtn;
    authDialog->loginOrRegisterChkBx_ = loginOrRegisterChkBx;

    loginOrRegisterChkBx->check();
    EXPECT_EQ(authDialog->title_, "login");
    EXPECT_EQ(authDialog->loginUsername_->getText(), "admin");
    EXPECT_EQ(authDialog->loginPassword_->getText(), "admin123");
    okBtn->click();
    cancelBtn->keypress();
    EXPECT_TRUE(authDialog->loginUsername_->getText().empty());
    EXPECT_TRUE(authDialog->loginPassword_->getText().empty());
}