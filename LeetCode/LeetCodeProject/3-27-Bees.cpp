//
// Created by cheers on 2019-03-27.
//

#include "3-27-Bees.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

bool myflag[5];
vector<int> vecx;
vector<int> vecy;
double myresult = 0x3f3f3f3f;
void dfs(int xx, int yy, double ssum, int ddepth){
    if(ddepth == 5){
        myresult = fmin(myresult, ssum+sqrt(xx*xx + yy*yy));
        return;
    }

    for(int i = 0; i < 5; i ++){
        if(myflag[i])
            continue;
        myflag[i] = true;
        dfs(vecx[i], vecy[i], ssum+sqrt((xx-vecx[i])*(xx-vecx[i]) + (yy-vecy[i]) * (yy-vecy[i])), ddepth+1);
        myflag[i] = false;
    }
}

void my_bee_main(){
    double x1,y1,x2,y2,x3,y3,x4,y4,x5,y5;

    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4>> x5 >> y5){
        vecx.push_back(x1);
        vecx.push_back(x2);
        vecx.push_back(x3);
        vecx.push_back(x4);
        vecx.push_back(x5);

        vecy.push_back(y1);
        vecy.push_back(y2);
        vecy.push_back(y3);
        vecy.push_back(y4);
        vecy.push_back(y5);

        dfs(0,0,0,0);
        int ans = myresult;
        cout << ans << endl;

    }

}

