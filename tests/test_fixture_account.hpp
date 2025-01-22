#ifndef TEST_FIXTURE_ACCOUNT_H
#define TEST_FIXTURE_ACCOUNT_H

#include <gtest/gtest.h>
#include <cstdint>
#include "C:\00_VISUAL_STUDIO_CODE\cmake_vscode_template\features\account\account.hpp"

class AccountTestFixture: public testing::Test
{
  public:
    AccountTestFixture();
    virtual ~AccountTestFixture();
    void SetUp() override;
    void TearDown() override;
  protected:
    account myAccount;
};

#endif  // TEST_FIXTURE_ACCOUNT_H