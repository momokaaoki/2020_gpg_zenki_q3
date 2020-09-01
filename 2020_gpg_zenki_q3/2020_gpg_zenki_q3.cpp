#include <iostream>
using namespace std;

int allCalc(int* i,int* a, int* b){
    int kasan = 0;  //加算
    int gensan = 0; //減算
    int jousan = 0; //乗算    
    int josan = 0;  //除算
   
    if (*i == 0) {
        return kasan = *a + *b;     //加算の計算
    }
    else if(*i == 1) {
        return gensan = *a - *b;    //減算の計算
    }
    else if (*i == 2) {
        return jousan = *a * *b;    //乗算の計算
    }
    else if (*i == 3) {
        return josan = *a / *b;     //除算の計算
    }
      
}

int main()
{
    //計算したい２つの値
    int a = 3;
    int b = 3;

    for (int i = 0; i < 4; ++i) {
        cout << allCalc(&i, &a, &b) << endl;
    }
    
}


