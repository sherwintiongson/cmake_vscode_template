#ifndef IMATHSERVICE_H
#define IMATHSERVICE_H

class IMathService {
public:
    virtual ~IMathService() = default;
    
    virtual int add(int a, int b) const = 0;
    virtual int subtract(int a, int b) const = 0;
    virtual int multiply(int a, int b) const = 0;
    virtual double divide(int a, int b) const = 0;
};

#endif // IMATHSERVICE_H
