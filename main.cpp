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

    int contador ;
    string  name ;




    cout << "Hey, What your name mate ? :" ;
    cin >> name ;
    cout << name << " you want me to count till which number ? choose between 0 to 50 " << endl ;
    cout << "Which number you want " << name << " ? :" ;

    cin >> contador ;


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
