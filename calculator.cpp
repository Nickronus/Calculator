#include "calculator.h"
#include <iostream>
#include "ifactoryoperations.h"
#include <vector>
#include <cmath>
using namespace std;

float Calculator::Calculate(IFactoryOperations* factoryOperations)
 {
    string data;
    float x = 0;
    float y = 0;
    bool isDataTrue = false;
    operations whatOperation;
    while(isDataTrue == false)
    {
        cout<<"Enter the expression: ";
        cin>>data;
        vector<char> vectorData(data.c_str(), data.c_str() + data.size() + 1);
        int dataLenght = data.length();
        int howOperations = 0;
        int discharge = 0;
        x = 0;
        y = 0;
        bool isItX = true;
        bool correctnessOfCharacters = true;
        for(int i = 0; i < dataLenght; i++)
        {
            if(howOperations == 2)
            {
                break;
            }
            if(vectorData[i] == '+')
            {
                if(i == 0)
                {
                    correctnessOfCharacters = false;
                    break;
                }
                isItX = false;
                whatOperation = operations::plus;
                discharge = 0;
                howOperations++;
                continue;
            }
            if(vectorData[i] == '-')
            {
                if(i == 0)
                {
                    correctnessOfCharacters = false;
                    break;
                }
                isItX = false;
                whatOperation = operations::minus;
                howOperations++;
                discharge = 0;
                continue;
            }
            if(vectorData[i] == '*')
            {
                if(i == 0)
                {
                    correctnessOfCharacters = false;
                    break;
                }
                isItX = false;
                whatOperation = operations::multiply;
                howOperations++;
                discharge = 0;
                continue;
            }
            if(vectorData[i] == '/')
            {
                if(i == 0)
                {
                    correctnessOfCharacters = false;
                    break;
                }
                isItX = false;
                whatOperation = operations::divide;
                howOperations++;
                discharge = 0;
                continue;
            }
            if((vectorData[i] == '1')||(vectorData[i] == '2')||(vectorData[i] == '3')||(vectorData[i] == '4')||
            (vectorData[i] == '5')||(vectorData[i] == '6')||(vectorData[i] == '7')||(vectorData[i] == '8')||
            (vectorData[i] == '9')||(vectorData[i] == '0'))
            {
                float g;
                if(vectorData[i] == '1') {g = 1;}
                if(vectorData[i] == '2') {g = 2;}
                if(vectorData[i] == '3') {g = 3;}
                if(vectorData[i] == '4') {g = 4;}
                if(vectorData[i] == '5') {g = 5;}
                if(vectorData[i] == '6') {g = 6;}
                if(vectorData[i] == '7') {g = 7;}
                if(vectorData[i] == '8') {g = 8;}
                if(vectorData[i] == '9') {g = 9;}
                if(vectorData[i] == '0') {g = 0;}
                if((isItX == false)&&(discharge == 0)&&(g == 0)&&(whatOperation == operations::divide))
                {
                    correctnessOfCharacters = false;
                    break;
                }
                if(isItX == true)
                {
                    x = x * 10 + g;
                }
                else
                {
                    y = y * 10 + g;
                }
                continue;
            }
            correctnessOfCharacters = false;
            break;
        }
        if((howOperations > 1)||(correctnessOfCharacters == false)||(howOperations == 0)||(y == 0))
        {
            howOperations = 0;
            x=0;
            y=0;
            cout<<"Error! ";
        }
        else
        {
            isDataTrue = true;
        }
    }
    return factoryOperations->Factory(whatOperation, x, y);
 }
