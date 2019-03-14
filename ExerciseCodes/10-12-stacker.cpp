//
// Created by root on 12/1/18.
//

#include "10-12-stacker.h"

void my_stacker_main(){
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout << "Please enter A to add a purchase order\n" << " P to process a PO, or Q to quit.\n";

    while (cin >> ch && toupper(ch) != 'Q'){
        while (cin.get() != '\n'){
            continue;
        }
        if(!isalpha(ch)){
            cout << '\a';
            continue;
        }

        switch(ch){
            case 'A':
            case 'a': cout << "Enter a PO number to add: ";
                cin >> po;
                if(st.isFull()){
                    cout << "stack already full\n";
                }else{
                     st.push(po);
                }
                break;
            case 'P':
            case 'p': if(st.isEmpty()){
                    cout << "stack already empty\n";
                    }else{
                    st.push(po);
                    cout << "PO # " << po << "popped\n";
                }
                break;
        }
        cout << "Please enter A to add a purchase order,\n" << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";

}
