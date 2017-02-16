#include <iostream>
#include <fstream>

#include "headers/sample.h"
#include "headers/sample_class.h"
#include "headers/inheritance_sample_class.h"

#define HELLO_WORLD "Hello, world!";

//// function prototype example, this real function is declared below
int sum(int n1, int n2);
int sum(int n1, int n2, int n3);
void change_pointer(int* n1);

void hackMyString(std::string & any_string);
////

const int GLOBAL_CONST = 77; //// never try to modify this value in next time
std::string global_sample("Hi, I am a global variable!"); //// this is other way to declare a variable

int sn::SampleClass::total_sample_class = 0;

int main(int argc, char *argv[]) {

    std::cout << HELLO_WORLD;

    std::cout << std::endl; //// new line

    std::cout << global_sample << std::endl;

    //// argv example
    if(argc > 1)
    {
        std::string arg_help = argv[1];

        if(arg_help == "help")
            std::cout << "You enter in help mode!" << std::endl;
    }
    ////

    std::cout << std::endl;

    //// while
    int count_while = 0;
    while(count_while <= 10)
    {

        if(count_while == 6) {
            count_while++;
            continue;
        }
        else
            std::cout << "count_while now is: " << count_while << std::endl;

        count_while++;

    }
    ////

    std::cout << std::endl;

    //// do while
    int count_dowhile = 100;
    do{
        std::cout << "count_dowhile now is: " << count_dowhile << std::endl;
    }while(count_dowhile <= 0);
    ////

    std::cout << std::endl;

    //// for
    for (int i = 0; i < 11; ++i) {
        std::cout << "for count now is: " << i << std::endl;
    }
    ////

    std::cout << std::endl;

    //// simple sum function and sum overload function
    std::cout << "simple sum function 10+10 = " << sum(10,10) << std::endl;
    std::cout << "simple sum function overloaded 10+10+10 = " << sum(10,10,10) << std::endl;
    ////

    std::cout << std::endl;

    //// sample header example
    std::cout << "sample header example, double of 2 is = " << my_double(2) << std::endl;
    std::cout << "sample header example, half of 2 is = " << my_half(2) << std::endl;
    ////

    std::cout << std::endl;

    //// sizeof example
    int sizeof_int = 10;
    double sizeof_double = 2.15;
    std::cout << "Size of int is: " << sizeof(sizeof_int) << std::endl;
    std::cout << "Size of double is: " << sizeof(sizeof_double) << std::endl;
    ////

    std::cout << std::endl;

    //// sample array
    int array_sample[] = {7,17,27,37,47,57,67,77};
    int array_sample_length = (sizeof(array_sample)/sizeof(*array_sample));
    std::cout << "The length of array_sample is: "<< array_sample_length << std::endl;
    for (int j = 0; j < array_sample_length; ++j) {
        std::cout << "array_sample value in index " << j << " is " << array_sample[j] << std::endl;
    }
    ////

    std::cout << std::endl;

    //// sample char array
    char char_array[] = "This is C++!";
    for (int k = 0; char_array[k] != '\0'; k++) {
        std::cout << char_array[k];
    }
    ////

    std::cout << std::endl;
    
    //// about string.h
    char about_stringh = '1';
    char about_stringh_b = 'A';
    char about_stringh_a[] = "Why?";
    char about_stringh_a_b[] = "What?";
    std::cout << isalpha(about_stringh) << std::endl;
    std::cout << isdigit(about_stringh) << std::endl;
    std::cout << isupper(about_stringh) << std::endl;
    std::cout << strlen(about_stringh_a) << std::endl;

    std::cout << strcmp(about_stringh_a_b, about_stringh_a) << std::endl;
    strcpy(about_stringh_a, about_stringh_a_b);
    std::cout << strcmp(about_stringh_a_b, about_stringh_a) << std::endl;

    strcat(about_stringh_a, about_stringh_a_b);
    std::cout << about_stringh_a << std::endl;

    std::cout << tolower(about_stringh_b) << std::endl;
    std::cout << toupper(about_stringh_b) << std::endl;
    ////

    std::cout << std::endl;

    //// about pointers
    int pointer_int = 77;
    int* pointer_int_point = &pointer_int;
    std::cout << "pointer_int memory address is: " << pointer_int_point << std::endl;
    std::cout << "pointer_int value is: " << *pointer_int_point << std::endl;

    change_pointer(pointer_int_point);
    std::cout << "pointer_int value, after change is: " << *pointer_int_point << std::endl;
    ////

    //// about matrix
    int matrix_array[2][2] = {{1,2},{3,4}};
    for (int l = 0; l < (sizeof(matrix_array)/ sizeof(*matrix_array)); ++l) {

        for (int i = 0; i < (sizeof(matrix_array)/ sizeof(*matrix_array)); ++i)
            std::cout << matrix_array[l][i] << "\t";

        std::cout << std::endl;
    }
    ////

    std::cout << std::endl;

    //// about memory allocate
    char* mem_allocate = new char[256];
    mem_allocate[0] = 'a';
    mem_allocate[1] = 'b';
    mem_allocate[56] = 'c';
    mem_allocate[57] = '\0';

    for (int m = 0; mem_allocate[m] != '\0' ; ++m)
        std::cout << mem_allocate[m] << std::endl;

    delete[] mem_allocate;

    std::cout << std::endl;

    // Dinamic memory allocate
    double* any_double = new double;
    *any_double = 77.7;
    std::cout << *any_double << std::endl;
    delete any_double;
    ////

    std::cout << std::endl;

    //// Struct
    typedef struct people
    {
        char name[100];
        std::string lastname;
        int years;
        std::string getFullName(){

            std::string fullName;
            fullName += this->name;
            fullName += " ";
            fullName += this->lastname;

            return fullName;
        };

    private:
        int credit_card;

    }people;

    people p;
    strcpy(p.name, "Jonatas");
    p.lastname = "Vargas";
    p.years = 28;

    std::cout << p.name << std::endl;
    std::cout << p.lastname << std::endl;
    std::cout << p.years << std::endl;
    std::cout << p.getFullName() << std::endl;
    ////

    std::cout << std::endl;

    //// About classes
    class Vehicle {
        int renavam;

    public:
        int id;
        std::string plate;
        int year;

        Vehicle(int id){
            this->id = id;
        }

        int getRenavam(){
            return this->renavam;
        }

        int setRenavam(int renavam){
            this->renavam = renavam;
            return this->renavam;
        }

    };

    Vehicle vehicle(1);
    vehicle.plate = "CYQ-9992";
    vehicle.year = 2006;
    vehicle.setRenavam(12345);

    std::cout << vehicle.id << std::endl;
    std::cout << vehicle.plate << std::endl;
    std::cout << vehicle.year << std::endl;
    std::cout << vehicle.getRenavam() << std::endl;


    std::cout << std::endl;

    sn::SampleClass* _sampleClass = new sn::SampleClass(7);
    std::cout << _sampleClass->getAny_protected_int() << std::endl;
    
    sn::SampleClass* sampleClass = new sn::SampleClass();
    sampleClass->setAny_text("Hi Sample external class with namespace");
    sampleClass->setAny_int(77);

    std::cout << &sampleClass << std::endl;
    std::cout << sampleClass->getAny_protected_int() << std::endl;
    std::cout << sampleClass->getAny_text() << std::endl;
    std::cout << sampleClass->getAny_int() << std::endl;
    std::cout << sampleClass->getTotalSample() << std::endl;
    
    sn::SampleClass* sampleClassPointer;
    sampleClassPointer = sampleClass;

    std::cout << sampleClassPointer->getAny_text() << std::endl;

    sampleClassPointer->setAny_text("Now I change this string with pointer!");
    std::cout << sampleClass->getAny_text() << std::endl;

    delete sampleClassPointer;

    std::cout << "After delete pointer, sampleClass not exist more." << std::endl;
    ////

    std::cout << std::endl;

    //// About function with memory reference variable
    std::string secure_string = "My secure string";
    std::cout << secure_string << std::endl;
    hackMyString(secure_string);
    std::cout << secure_string << std::endl;
    ////

    std::cout << std::endl;

    //// About inheritance
    sn::InheritanceSampleClass* inheritance = new sn::InheritanceSampleClass();

    inheritance->setInheritanceInt(10);
    inheritance->setAny_int(10);

    std::cout << "Simple inheritance class example = " << inheritance->getInheritanceInt() << std::endl;
    ////

    std::cout << std::endl;

    //// About fstream
    std::fstream* output = new std::fstream();
    output->open("fstream.txt", std::fstream::out);
    std::cout << "File stream is: " << output->is_open() << std::endl;
    const char* text = "Haaaaaa";
    output->write(text, 4);
    output->close();
    std::cout << "File stream, after close is: " << output->is_open() << std::endl;
    delete output;

    //TODO: Have bug
    std::fstream* readFile = new std::fstream();
    readFile->open("fstream.txt");
    char file_text = readFile->get();
    std::string text_string;
    text_string.push_back(file_text);

    while(readFile->good()){
        file_text = readFile->get();
        text_string.push_back(file_text);
    }

    std::cout << text_string << std::endl;
    ////

    std::cout << std::endl;

    //// About errors
    try {
        throw "Any error now";
    }
    catch (const char* e)
    {
        std::cerr << e << std::endl;
    }
    catch(...){
        std::cerr << "Unexpected error!" << std::endl;
    }
    ////

    //// sample in data
    /*
    int in_data;
    std::cout << "Choice any number: " << std::endl;
    std::cin >> in_data;
    std::cout << "You choice number -> " << in_data << std::endl;
     */
    ////

    return 0;

}

//// sample sum function
// use "void" in function type to not return any result.
int sum(int n1, int n2)
{
    return n1 + n2;
}
////

//// sample sum overload function
int sum(int n1, int n2, int n3)
{
    return n1 + n2 + n3;
}
////

//// sample change pointer function
void change_pointer(int* n1){
    *n1 = 777;
}
////

//// About function with memory reference variable
void hackMyString(std::string & any_string)
{
    any_string = "String hacked by function!";
}
////