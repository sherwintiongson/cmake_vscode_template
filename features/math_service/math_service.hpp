#ifndef MATHSERVICE_H
#define MATHSERVICE_H

class MathService {
public:
    virtual ~MathService() = default;
    
    virtual int add(int a, int b) const = 0;
    virtual int subtract(int a, int b) const = 0;
    virtual int multiply(int a, int b) const = 0;
    virtual double divide(int a, int b) const = 0;
};

#endif // MATHSERVICE_H
