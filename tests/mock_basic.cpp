#include <iostream>
#include "gtest/gtest.h"
#include "gmock/gmock.h"

class ClassUnderTest
{
private:
  /* data */
public:
  ClassUnderTest(/* args */) = default;

  virtual void methodUnderTest(void)
  {
    std::cout << "methodUnderTest" << std::endl;
  }
};

class MockBasic: public ClassUnderTest
{
private:
  /* data */
public:
  MockBasic(/* args */) = default;
  MOCK_METHOD0(methodUnderTest, void());
};

TEST(BasicOfMocking, testingBasicMock)
{
  MockBasic mb;
}

