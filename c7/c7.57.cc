/*
 * Exercise 7.57: Write your own version of the Account class.
*/

#include <string>
using namespace std;

class Account {
public:
    static double rate() { return interestRate; }
    static void rate(double);
    void calculate() { amount += amount * interestRate; }
private:
    static double interestRate;
    double amount;
    static constexpr int period = 30;
    double daily_tbl[period];
};

constexpr int Account::period;

int main(void)
{
    return 0;
}