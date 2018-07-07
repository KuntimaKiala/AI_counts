/*
Author : Kuntima
Description : An AI that counts between 0 and 50
date : 7/7/2017
*/


#include <iostream>
#include <string>

using namespace std;

int main()
{

    // The superior limit
    int contador ;
    // The name of the name that will put the superior limit
    string  name ;




    cout << "Hey, What your name mate ? :" ; // Ask the name of the person
    cin >> name ; // The user says its  name
    cout << name << " you want me to count till which number ? choose between 0 to 50 " << endl ; // a warnig about the interval that the AI can count
    cout << "Which number you want " << name << " ? :" ;

    cin >> contador ; // The user gives the superior limit


    // The coditions to control that the AI always counts between 0  and 50

    if (contador < 0 and contador > 50){
        cout << name << " counting  from 0 to " << contador << " is to much for me\n" ;


    }

    if (contador > 0 and contador <= 50){
          cout << "Watch me !!!\n" ;
          for ( int i=0; i<= contador; i++){

          cout << i << endl ;
          }

          cout << "Not impressed yet ?" ;
    }

    if(contador == 0){
          cout << "Counting, till 0 ? Ahah Too easy " << name  ;

     }

    return 0 ;

}
