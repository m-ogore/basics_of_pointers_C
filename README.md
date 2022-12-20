# basics_of_pointers_C
This is a simple demonstration of C pointers, and how to use it to return variables in functions this example can be modified for multiple variables 


This is a simple example to demonstrate the use of pointers

Pointers to return multiple variables in a function in arduino/C
points to a variable address

You have to follow this sequence to initialize;

'''

int t; // this is a global variable. initializing it locally in a function is tricky
int* my_pointer;

'''

to assign my_pointer a value, you can initialize 

or

'''

my_pointer=&t;

'''

always use ampersand sign '&' 

if you want to later change the value of pointer globally just change the value of t

e.g

'''

t= some_value;

'''

do not do this again 

'''

my_pointer=&t;

'''

Accepting a pointer in a function:

'''
void foo(int* pointer); // initialize function

'''

to call the function:

'''

foo(my_pointer); // no need for asterix or ampersand sign

'''

see the code in ino file
