//
// Created by root on 11/25/18.
//

#include "4-13.h"

void my_main1(){
    char * first_name = new char[10];
    char * last_name = new char[5];

    char letter;
    int age;

    cout << "What is your first name?" << endl;
    cin.getline(first_name,10);
    cout << endl << "what is your last name?" << endl;
    cin >> last_name;
    cout << endl << "What letter grade do you deserve?" << endl;
    cin >> letter;
    cout << endl << "What is your age?" << endl;
    cin >> age;

    cout << "Name:" << last_name << "," << first_name << endl;
    cout << endl << "Grade:" << (char)(letter+1);
    cout << endl << "Age:" << age;
}

void my_main2(){
    const int ArSize = 20;
    string name;
    string dessert;

    cout << "Enter your name: \n";
    getline(cin,name);
    cout << "Enter your favourite dessert: \n";
    getline(cin,dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

}

void my_main3(){

    char * first_name = new char[20];
    char * last_name = new char[20];

    cout << "What is your first name?" << endl;
    cin.getline(first_name,20);
    cout << endl << "what is your last name?" << endl;
    cin.getline(last_name,20);
    last_name = strcat(last_name,",");

    cout << "Here is the information in a single string: " << strcat(last_name,first_name);
}

void my_main4(){

    string first_name;
    string last_name;

    cout << "What is your first name?" << endl;
    getline(cin,first_name);
    cout << endl << "what is your last name?" << endl;
    last_name = last_name + first_name;

    cout << "Here is the information in a single string: " << last_name;
}

void my_main5(){
    struct CandyBar{
        string band;
        double weight;
        int calorie;
    };

    CandyBar snack{
        "Mocha Munch",
        2.3,
        350
    };

    cout << "snack.band: " << snack.band << endl;
    cout << "snack.weight: " << snack.weight << endl;
    cout << "snack.calorie: " << snack.calorie << endl;

}

void my_main6(){
    struct CandyBar{
        string band;
        double weight;
        int calorie;
    };

    CandyBar snack[3]{
            {"Mocha Munch", 2.3, 350},
            {"Bread",1.0,350},
            {"Hello",2.0,450}
    };

    cout << "snack.band: " << snack[0].band << endl;
    cout << "snack.weight: " << snack[0].weight << endl;
    cout << "snack.calorie: " << snack[0].calorie << endl;

    cout << "snack.band: " << snack[1].band << endl;
    cout << "snack.weight: " << snack[1].weight << endl;
    cout << "snack.calorie: " << snack[1].calorie << endl;

    cout << "snack.band: " << snack[2].band << endl;
    cout << "snack.weight: " << snack[2].weight << endl;
    cout << "snack.calorie: " << snack[2].calorie << endl;


}

void my_main7(){
    struct PizzaInfo{
        string company_name;
        double diameter;
        int weight;
    };

    PizzaInfo pInfo;

    cout << "Input the company name:" << endl;
    cin >> pInfo.company_name;

    cout << "Input the diameter:" << endl;
    cin >> pInfo.diameter;

    cout << "Input the weight:" << endl;
    cin >> pInfo.weight;

    cout << "pizza.company: " << pInfo.company_name << endl;
    cout << "pizza.diameter: " << pInfo.diameter << endl;
    cout << "pizza.weight: " << pInfo.weight << endl;


}

void my_main8(){
    struct PizzaInfo{
        string company_name;
        double diameter;
        int weight;
    };

    PizzaInfo * pInfo = new PizzaInfo;

    cout << "Input the company name:" << endl;
    cin >> pInfo->company_name;

    cout << "Input the diameter:" << endl;
    cin >> pInfo->diameter;

    cout << "Input the weight:" << endl;
    cin >> pInfo->weight;

    cout << "pizza.company: " << pInfo->company_name << endl;
    cout << "pizza.diameter: " << pInfo->diameter << endl;
    cout << "pizza.weight: " << pInfo->weight << endl;


}

void my_main9(){

    struct CandyBar{
        string band;
        double weight;
        int calorie;
    };

    CandyBar * snack = new CandyBar[3];

    //A and B have same effect.

    //A
    //snack[0] = {"A",20.0,250};
    //snack[1] = {"B",30.0,350};
    //snack[2] = {"C",40.0,450};

    //B
    *snack = {"A",20.0,250};
    *(snack+1) = {"B",30.0,350};
    *(snack+2) = {"C",40.0,450};

    cout << "snack.band: " << snack[0].band << endl;
    cout << "snack.weight: " << snack[0].weight << endl;
    cout << "snack.calorie: " << snack[0].calorie << endl;

    cout << "snack.band: " << snack[1].band << endl;
    cout << "snack.weight: " << snack[1].weight << endl;
    cout << "snack.calorie: " << snack[1].calorie << endl;

    cout << "snack.band: " << snack[2].band << endl;
    cout << "snack.weight: " << snack[2].weight << endl;
    cout << "snack.calorie: " << snack[2].calorie << endl;

}

void my_main10(){
    array<char,3> records;
    cout << "input your 3 times records:" << endl;
    cin >> records[0] >> records[1] >> records[2];


}