
#include <iostream>
using namespace std;

// Base class
class Payment
{
public:
virtual void processPayment()
{
cout << "Processing a general payment." << endl;
}
virtual ~Payment() = default;
};

// First derived class
class CashPayment : public Payment
{
public:
void processPayment() override
{
cout << "Payment made using cash." << endl;
}
};

// Second derived class
class MobileMoneyPayment : public Payment
{
public:
void processPayment() override
{
cout << "Payment made using mobile money." << endl;
}
};

int main()
{
CashPayment cash;
MobileMoneyPayment mobileMoney;

Payment *ptr;

ptr = &cash;
ptr->processPayment();

ptr = &mobileMoney;
ptr->processPayment();

return 0;
}
