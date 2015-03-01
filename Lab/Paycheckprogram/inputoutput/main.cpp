/* 
 * File:   main.cpp
 * Author: Kurt Montoya
 *
 * Created on February 23, 2015, 9:56 AM
 *      purpose: input/output/process flowchart
 */

//system libraries
#include <iostream>//I/O library
using namespace std;//I/O library under std namespace

//user libraries

//global constants

//function prototypes

//execution begins here

int main(int argc, char** argv) {
    //declare variables
    //Inputs:
    //  Pay Rate = payrate -> $'s/hr 
    //  Hours Worked = hrsWrkd -> hrs
    //Output:
    //  Gross Pay Check Amount = payChk -> $'s
    float payRate,hrsWrkd,payChk;
    //prompt the user for inputs
    cout<<"This program calculates your gross paycheck"<<endl;
    cout<<"Input your pay rate as $xx.xx, provide the x's"<<endl;
    cin>>payRate;
    cout<<"Input your hours worked this pay period"<<endl;
    cout<<"Format xxx.x, provide the x's"<<endl;
    cin>>hrsWrkd;
    //Calculate the paycheck
    payChk=payRate*hrsWrkd;
    //Output the results
    cout<<"$"<<payChk<<" = $"<<payRate<<"/hr * "<<hrsWrkd<<"(hrs)"<<endl;
    //exit
    return 0;
}
