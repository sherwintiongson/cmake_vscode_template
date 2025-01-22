#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>
#include <stdexcept>
#include "test_fixture_account.hpp"


AccountTestFixture::AccountTestFixture()
{
    //std::cout << "Account Test Fixture Constructor gets called!!" << std::endl;
}

AccountTestFixture::~AccountTestFixture()
{
    //std::cout << "Account Test Fixture desstructor gets called!!" << std::endl;
}

void AccountTestFixture::SetUp()
{
    //std::cout << "Test fixture Setup() called." << std::endl;

    // all accounts have initial deposit of 10k
    myAccount.deposit(10000);
}

void AccountTestFixture::TearDown()
{
    //std::cout << "Test fixture TearDown() called." << std::endl;

    // all accounts when destroyed must be zero balance
    myAccount.withdraw(myAccount.getBalance());
}

