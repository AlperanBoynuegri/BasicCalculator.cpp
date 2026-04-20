#include "functions.h"
float add(float num1, float num2) {
    return num1+num2;
}
float sub(float num1, float num2) {
    return num1-num2;
}
float mul(float num1, float num2) {
    return num1*num2;
}
float div(float num1, float num2) {
    return num1/num2;
}
float calculate(string c, float num1, float num2) {
    while (c!="=")
        if(c=="+") {
            return add(num1,num2);
        }
        else if(c=="-") {
            return sub(num1,num2);
        }
        else if(c=="*") {
            return mul(num1,num2);
        }
        else if(c=="/") {
            return div(num1,num2);
        }
}