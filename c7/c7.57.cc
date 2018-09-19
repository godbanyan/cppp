/*
 * Exercise 7.57: Write your own version of the Account class.
*/

#include <string>
using namespace std;

class Account
{
  public:
    static double rate() { return interestRate; }
    static void rate(double);
    void calculate() { amount += amount * interestRate; }

  private:
    static double interestRate;
    double amount;
    const int haha = 10;
    static const int period = 30;      // 对于int型， static const int足以
    static constexpr double db = 20.0; // 但是对于double型， 则需要static constexpr double
    double daily_tbl[period];
};

const int Account::period;

int main(void)
{
    return 0;
}