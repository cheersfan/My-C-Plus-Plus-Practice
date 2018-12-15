//
// Created by root on 12/12/18.
//

#include "13-9-usebrass1.h"
#include "13-7-brass.h"


void my_usebrass1_main(){
    using namespace std;

    Brass Piggy("Porcelot Piug", 381299, 4000.00);
    BrassPlus Hoggy("Horatio Hogg", 382288, 3000.00);

    Piggy.ViewAcct();
    cout << endl;

    Hoggy.ViewAcct();
    cout << endl;

    cout << "Depositing $1000 into the Hogg Account:\n";
    Hoggy.Deposit(1000.00);
    cout << "New Balance:$ " << Hoggy.Balance() << endl;

    cout << "Withdrawing $ 4200 from the Pigg Account: \n";
    Piggy.Withdraw(4200.00);

    cout << "Withdrawing $ 4200 from the Hogg Account:\n";
    Hoggy.Withdraw(4200.00);
    Hoggy.ViewAcct();


}