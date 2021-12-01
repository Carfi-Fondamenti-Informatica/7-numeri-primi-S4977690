#include "lib.h"

bool numeriprimi (int n, int h){
    if (n<0){
        return false;
    } else if(n==1){
        return true;
    }else if(h==1){
       
        return true;
    }else if(n%h==0){
        return false;
    }
    numeriprimi(n,--h);
}
