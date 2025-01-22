#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "C:\00_VISUAL_STUDIO_CODE\cmake_vscode_template\features\account\account.hpp"
#include "test_fixture_account.hpp"

// Test without test fixtures
TEST(AccountTestSuite, BalanceIsZeroUponCreation) {
    account myAccount;
    EXPECT_EQ(myAccount.getBalance(), 0);
}

TEST(AccountTestSuite, DepositOK) {
    account myAccount;
    myAccount.deposit(100);
    EXPECT_EQ(myAccount.getBalance(), 100);
}

TEST(AccountTestSuite, WithdrawOK) {
    account myAccount;
    myAccount.deposit(100);
    myAccount.withdraw(50);
    EXPECT_EQ(myAccount.getBalance(), 50);
}

TEST(AccountTestSuite, FundtransferOK) {
    account AccountA;
    account AccountB;
    AccountA.deposit(100);
    AccountA.transfer(AccountB, 100);
    EXPECT_EQ(AccountB.getBalance(), 100);
}



// Test with test fixtures
TEST_F(AccountTestFixture, BalanceIsZeroUponCreation) {
    //std::cout << "BalanceIsZeroUponCreation" << std::endl;
    EXPECT_EQ(myAccount.getBalance(), 10000);
}

TEST_F(AccountTestFixture, DepositOK) {
    //std::cout << "DepositOK" << std::endl;
    myAccount.deposit(100);
    EXPECT_EQ(myAccount.getBalance(), 10100);
}

TEST_F(AccountTestFixture, WithdrawOK) {
    //std::cout << "WithdrawOK" << std::endl;
    myAccount.deposit(100);
    myAccount.withdraw(50);
    EXPECT_EQ(myAccount.getBalance(), 10050);
}

TEST_F(AccountTestFixture, FundtransferOK) {
    //std::cout << "FundtransferOK" << std::endl;
    account AccountB;
    myAccount.deposit(100);
    myAccount.transfer(AccountB, 100);
    EXPECT_EQ(myAccount.getBalance(), 10000);
    EXPECT_EQ(AccountB.getBalance(), 100);
}