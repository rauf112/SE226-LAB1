#include <iostream>

using namespace std;
int main() {
string Name;
int id;

    cout<<"Task 1: "<<endl;

cout<<"What is your Name ?"<<endl;
cin>> Name;
cout<<"Hello " + Name<<endl;

cout<<"What is your Student ID ?"<<endl;
cin>> id;
cout<<"Your ID is : " <<id <<endl;

    cout<<""<<endl;

    cout<<"Task 2: "<<endl;
double var1;
double var2;
double sum;
double diff;
double prod;
    cout<<"Enter Variable 1 "<<endl;
    cin>> var1;
    cout<<"Enter Variable 2"<<endl;
    cin>> var2;

    sum=var1+var2;
    diff=var1-var2;
    prod=var1*var2;
    cout<<"Var 1: "<< var1<<endl;
    cout<<"Var 2: "<< var2<<endl;
    cout<<"Summation: "<< sum <<endl;
    cout<<"Difference: "<< diff <<endl;
    cout<<"Multiplication: "<< prod <<endl;

    cout<<""<<endl;

    cout<<"Task 3: "<<endl;
    string altName;
    double labGrade;
    double midTerm;
    double final;
    cout<<"Enter your Name:"<<endl;
    cin>> altName;
    cout<<"Enter Lab Grade:"<<endl;
    cin>>labGrade;
    cout<<"Enter Midterm:"<<endl;
    cin>>midTerm;
    cout<<"Enter Final:"<<endl;
    cin>>final;

    double lastScore= (labGrade*25/100) + (midTerm* 35/100) + (final*40/100);
    cout<<"Name: "+altName<<endl;
    cout<<"Lab: "<<labGrade <<endl;
    cout<<"Midterm: "<<midTerm <<endl;
    cout<<"Final: "<<final <<endl;
    cout<<"Last Score: "<<lastScore <<endl;

    cout<<""<<endl;

    cout<<"Task 4: "<<endl;

    cout<<"*"<<endl<<"**"<<endl<<"***"<<endl<<"**"<<endl<<"*"<<endl;


    return 0;
}
