#include <string>
using std::string;

class Account{
private:
    string depositor;   // 储户名称
    string account_number;   // 账号 
    double balance;   // 存款余额
public:
    Account() {depositor="xxx"; account_number="0000"; balance=0;}
    Account(const string & d, const string & a, double b);
    ~Account();
    void show();   // 显示信息
    void deposit(double money);   // 存钱
    void withdraw(double money);   // 取钱
};
