#include<iostream>
using namespace std;
int main(){
/* 
Un-buffered standard error stream (cerr):
 cerr is the standard error stream which is used to output the errors. 
 This is also an instance of the ostream class. 
 As cerr is un-buffered so it is used when we need to 
 display the error message immediately. 
It does not have any buffer to store the error message and display later.
*/
//cerr << "an error has occured";
/*int age;
cout << "what is your age:";
cin  >> age;
cout<< "your age is:" << age;*/
//cout << "hello world";


/* 
buffered standard error stream (clog):
 This is also an instance of the ostream class and used to
  display errors but unlike cerr the error is first inserted
   into a buffer and is stored in the buffer until it is not fully filled. 
The error message will be displayed on the screen too.
*/
/*
   clog << "An error occured";
   return 0;
*/



}
