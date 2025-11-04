#include "account.h"

int main(){
    {
        Account aaa;
        aaa.show();
    }
    Account bbb = {"bbb", "6666", 999};
    bbb.show();
    bbb.deposit(1000);
    bbb.show();
    bbb.withdraw(666);
    bbb.show();
    return 0;
}
