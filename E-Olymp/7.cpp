//Link: https://www.e-olymp.com/az/problems/7

#include <bits/stdc++.h>
using namespace std;

void first_value(int &x, char ch){
    switch(ch){
        case 'M':
            x += 1000;
            break;
        case 'D':
            x += 500;
            break;
        case 'C':
            x += 100;
            break;
        case 'L':
            x += 50;
            break;
        case 'X':
            x += 10;
            break;
        case 'V':
            x += 5;
            break;
        case 'I':
            x += 1;
            break;
    }    
}

void calculate(int &x, string str, int right, int left, int previous){
    for(int i = right ; i > left ; i--){
        switch(str[i]){
            case 'M':
                (1000 >= previous) ? x += 1000 : x -= 1000;
                previous = 1000;
                break;
            case 'D':
                (500 >= previous) ? x += 500 : x -= 500;
                previous = 500;
                break;
            case 'C':
                (100 >= previous) ? x += 100 : x -= 100;
                previous = 100;
                break;
            case 'L':
                (50 >= previous) ? x += 50 : x -= 50;
                previous = 50;
                break;
            case 'X':
                (10 >= previous) ? x += 10 : x -= 10;
                previous = 10;
                break;
            case 'V':
                (5 >= previous) ? x += 5 : x -= 5;
                previous = 5;
                break;
            case 'I':
                (1 >= previous) ? x += 1 : x -= 1;
                previous = 1;
                break;
        }
    }
}

void get_solution(int c){
    string solution = "";
    int temp;
    temp = c/1000;
    c -= temp*1000;
    if(temp != 0){
        for(int i = 0 ; i < temp ; i++){
            solution += 'M';
        }
    }
    temp = c/100;
    c -= temp*100;
    if(temp != 0){
        if(temp == 4)
            solution += "CD";
        else if(temp == 9)
            solution += "CM";
        else{
            if(temp >= 5)
                solution += "D";
            for(int i = 0 ; i < temp%5 ; i++)
                solution += "C";
        }
    }
    temp = c/10;
    c -= temp*10;
    if(temp != 0){
        if(temp == 4)
            solution += "XL";
        else if(temp == 9)
            solution += "XC";
        else{
            if(temp >= 5)
                solution += "L";
            for(int i = 0 ; i < temp%5 ; i++)
                solution += "X";
        }
    }
    if(c != 0){
        if(c == 4)
            solution += "IV";
        else if(c == 9)
            solution += "IX";
        else{
            if(c >= 5)
                solution += "V";
            for(int i = 0 ; i < c%5 ; i++)
                solution += "I";
        }
    }
    cout << solution;
}

int main(int argc, char** argv) {
    
    string str;
    int a = 0, b = 0, length, i, operand;
    
    cin >> str;
    
    length = str.length();
    
    for(int i = 0 ; i < length ; i++)
        if(str[i] == '+')
            operand = i;
    
    first_value(a,str[operand-1]);
    first_value(b,str[length-1]);
    
    calculate(a,str,operand-2,-1,a);
    calculate(b,str,length-2,operand,b);
    
    get_solution(a+b);

    return 0;
}
