/*************************************************************************
 @Author: cecilzhang
 @Created Time : Wed Feb 26 21:03:41 2020
 @File Name: multiplication.cpp
 @Description:
 @Copyright (c) 2018, Tencent Inc. All rights reserved.
 ************************************************************************/

#include<cmath>
#include<fstream>
#include<iostream>

using namespace std;

int restricted_multiple(int a,int b)
{
    int i,mul;
    if (a==0 || b==0){
        return 0;
    }
    if ((a>0&& b>0)|| (a<0 && b<0)) {
        mul = 1;
    } else {
        mul = -1;
    }
    int n = 0;
    int ans = 0, tmp = 0;
    a = abs(a);
    b = abs(b);
    while (b>0) {
        i = b%2;
        if (i == 1) {
            tmp = a << n;
        } else {
            tmp = 0;
        }
        b = b/2;
        ans += tmp;
        ++n;
    }
    return ans;
}

int main(int argc, char* argv[]) {
    ifstream in("./case");
    if (!in) {
        return -1;
    }
    int a,b;
    in>>a>>b;
    cout<<restricted_multiple(a,b)<<endl;
}
