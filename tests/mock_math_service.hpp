#ifndef MOCKMATHSERVICE_H
#define MOCKMATHSERVICE_H

#include "math_service.hpp"
#include <gmock/gmock.h>

class MockMathService : public MathService {
public:
    MOCK_CONST_METHOD2(add, int(int a, int b));
    MOCK_CONST_METHOD2(subtract, int(int a, int b));
    MOCK_CONST_METHOD2(multiply, int(int a, int b));
    MOCK_CONST_METHOD2(divide, double(int a, int b));
};

#endif // MOCKMATHSERVICE_H
