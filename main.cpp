#include <iostream>
#include <string>
int main()
{

    //* Declare and initialize pointers
    
    int *p_number{}; // Will initialize with null pointer
    double *p_fractional_number{};

    // * Expilicitly initialize with null pointer
    int *p_number1{nullptr};
    double *p_fractional_number1{nullptr};

    // * Pointers to different variables are of the same size
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl;
    std::cout << "sizeof(doube*) : " << sizeof(double*) << std::endl;
    std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl;
    std::cout << "sizeof(p_number1) :" << sizeof(p_number1) << std::endl;
    std::cout << "sizeof(p_fractional_number1) :" << sizeof(p_fractional_number1) << std::endl;

    //* It doesn't matter if you put the  * close to data or variable name
    int* p_number2 {nullptr};
    int *p_number3 {nullptr};
    int  *p_number4 {nullptr};
    std::cout << std::endl;

    int* p_number5 {}, other_int_var {};
    int* p_number6 {}, other_int_var6 {}; //* Confusing  as you wonder if other_int_var6
                                          // *  is also   a pointer to int.It is not
                                          // * The structure is exactly the same for the
                                          // * previous statement
    std::cout << "sizeof(p_number5) : " << sizeof(p_number5) << std::endl;
    std::cout << "sizeof(other_int_var) : "<< sizeof(other_int_var) << std::endl;
    std::cout << "sizeof(p_number6) : " << sizeof(p_number6) << std::endl;
    std::cout << "sizeof(other_int_var6) : " << sizeof(other_int_var6) << std::endl;

    // * This is better to seperate these declorations on different lines though
    int* p_number7 {};
    int other_int_var {}; // * No room for confusion this time
    
    
    // * Initializating pointers and assiging them data
    // * We know that pointers store addresses of variables

    int int_var {43};
    int* p_int {&int_var}; //* The address of opreator (&)

    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Address in memory) : " << p_int << std::endl;

    // * You can also change the address stored in a pointer any time

    int int_var1 {65};
    p_int = &int_var1; // * Assign a different address to the pointer
    std::cout << "p_int (with different address) : " << p_int << std::endl;

    //! Can't cross assign between pointers of different types
    // int *p_int1 {nullptr};
    // double double_var{33};

    // p_int1 = &double_var; //! Compile Error


    // * Derefencing a pointer :

    int* p_int2 {nullptr};
    int int_data {56};
    p_int2 = &int_data;

    std::cout << "value : " << *p_int2 <<std::endl;
    
    //* Pointer to char
    
    const char* message {"Hello world"};

    std::cout << "Messagge : " << message << std::endl;

    //! *meesage = "B" // Compile Error
    std::cout << "*message : " << *message << std::endl;

    // * Allow users to modify the string
    char message1[] {"Hello world"};
    message1[0] = 'B';
    std::cout << "message1 : " << message1 << std::endl;
    

    // * Dynamic memory allocation in Heap

    //* How we've used pointers so far
    
    int number {22}; // Stack memory

    int * p_number = &number;

    std::cout << std::endl;
    std::cout<<"Declaring pointer and assiging address : " << std::endl;
    std::cout << "number : " << number << std::endl;
    std::cout << "p_number : " << p_number << std::endl;
    std::cout << "&number : " <<  &number << std::endl;
    std::cout << "*p_number : " << *p_number << std::endl;

    int * p_number1; //! Unitialized pointer , contains junk address
    int number1 {12};
    p_number1 = &number1; //* Make it point to a valid address
    std::cout << std::endl;
    std::cout << "Unitialized pointer : " << std::endl;
    std::cout << "*p_number1 : " << *p_number1 << std::endl;
    
    
    //! BAD
    //* Writing into unitialized pointer through dereference
    int *p_number2;//! Contains junk addresses : could be anything
    std::cout << "Writing in the 55" << std::endl;
    *p_number2 = 55; //! Writing into junk address : BAD
    std::cout << std::endl;
    std::cout << "Writing into unitialized pointer through dereference" << std::endl;
    std::cout << "p_number2 : " << p_number2 << std::endl;
    std::cout << "*p_number2 : " << *p_number2 << std::endl;


    //* Initializing pointer to null
    //* int *p_number3{nullptr}; // Also works
    int * p_number3 {}; //* Initialized with pointer equivalent of zero :  nullptr
                         //* A pointer pointing nowhere
     std::cout << "Writing into nullptr memory" << std::endl;
     // ! *p_number3 = 33;//* Writing into pointer pointing nowhere : BAD , Crash
     std::cout << "Done Writing"<< std::endl;

     std::cout << std::endl;
     std::cout << "Reading and Writing through nullptr : " << std::endl;
     

    //* Dynamic heap memory
    
     int *p_number4 {nullptr};
     p_number4 = new int;  //* Dynamic allocate space for a single int on the heap
                           //* This memory belongs to our program from now on. The system
                           //* can't use it for anything else until we return it
                           //* After this line executes , we will have a valid memory location
                           // * allocated . The size of the allocated memory will be such that it
                           //* can store the type ponted to bye pointer
     
    
    *p_number4 = 77;
    std::cout << std::endl;
    std::cout << "Dynamic allocated memory "<< std::endl;
    std::cout << "*p_number4 : " << *p_number4 << std::endl;

    //* How we've used pointers so far
    
    int number {22}; //Stack memory
    int *p_number = &number;

    std::cout << std::endl;
    std::cout << "Declaring pointers and assigning address : " << std::endl;
    std::cout << "number : " << number << std::endl;
    std::cout << "p_number : " << p_number << std::endl;
                                                                     d::cout << "&p_number : " << &p_number <<std::endl;
    std::cout << "*p_number : " << *p_number <<std::endl;

    std::cout << std::endl; //! Uninitialized pointer, contain junk address
    int *p_number1;
    int number1 {12};
    p_number1 = &number1;
    std::cout << std::endl;
    std::cout << "Uninitialized pointer : " << std::endl;
    std::cout << "*p_number1 : " << *p_number1 << std::endl;
    

    //! BAD
    // ! Writing into uninitialized pointer through dereference
    
    int *p_number2; //! Contains junk address : could be anything
     std::cout << "Writing in the 55" << std::endl;
    *p_number2 = 55;
    std::cout << std::endl;
    std::cout << "Writing into uninitialized pointer through derefence" << std::endl;
    std::cout << "p_number2 : " << p_number2 << std::endl; //* Reading from junk address
    std::cout << "*p_number2 : " << *p_number2 << std::endl;
     

    //* Initializing pointer to null
    
    //* int *p_number3 {nullptr}; // Also Works
    int *p_number3{}; //* Initialized with pointer equavilent of zero : nullptr
                      //* A pointer pointing nowhere '
    std::cout << "Writing into nullptr memory" << std::endl;
    *p_number3 = 33; //! Writing into a pointer pointing nowhere : BAD, CRASH
    std::cout <<"Done Writing" << std::endl;
    std::cout << std::endl;
    std::cout << "Reading and writing through nullptr : " << std::endl;
    // * std::cout << "*p_number3" << p_number3 << std::endl;
    // * std::cout << "*p_number3 << *p_number3 << std::endl;
    
    //* Dynamic heap memory
    
    int *p_number4{nullptr};
     p_number4 = new int; // * Dynamiclly allocate space for a single int on the heap
                          //* This memory belongs to our program from now on.The system
                          //* can't  use it for anyting else, untill we return it.
                          //* After this line executes, we will have a valid memory location
                          //* allocated. The size of the allocated memory will be such that it
                          //* can store the type pointed to by the pointer
     *p_number4 = 77;
    std::cout << std::endl;
    std::cout << "Dynamically allocating memory : " << std::endl;
     std::cout <<"*p_number4 : " << *p_number4 << std::endl;

     //* Return memory to the Operating system
    delete p_number4;
    p_number4 = nullptr;
     

    //* It is also possible to initialize the pointer with a valid
    //* address up on decloration. Not with a nullptr
    
    int *p_number5{new int};     //! Memory location contains junk value
    int *p_number6{new int(22)}; //* Use direct initialization
    int *p_number7{new int{23}}; //* Use uniform initialization

    std::cout << std::endl;
    std::cout << "Initialize with valid memory address at declaration " << std::endl;
    std::cout << "p_number5 : " << p_number5 << std::endl;
    std::cout << "*p_number5 : " << *p_number5 << std::endl;
    std::cout << std::endl;
    std::cout << "p_number6 : " << p_number6 << std::endl;
    std::cout << "*p_number6 : " << *p_number6 << std::endl;
    std::cout << std::endl;
    std::cout << "p_number7 : " << p_number7 << std::endl;
    std::cout << "*p_number7 : " << *p_number7 << std::endl;

    //* Remember to release the memory
    delete p_number5;
    p_number5 = nullptr;

    delete p_number6;
    p_number6 = nullptr;

    delete p_number7;
    p_number7 = nullptr;

    //* Can reuse pointers
    p_number5 = new int(81);
    std::cout << "*p_number5 : " << *p_number5 << std::endl;

    delete p_number5;
    p_number5 = nullptr;


    //! Calling delete twice on a pointer : BAD!
    p_number5 = new int (99);
    std::cout << "*p_number5 : " << *p_number5 << std::endl;
    delete p_number5;
    delete p_number5;
    std::cout << "Program ending well" << std::endl;
    

    //! Case 1 : Uninitialized pointer
    
    int *p_number; //! Dangling uninitialized pointer

    std::cout << std::endl;
    std::cout << "Case1 : Uninialized pointer : ." << std::endl;
    std::cout << "p_number : " << p_number << std::endl;
    std::cout << "*p_number : " << *p_number << std::endl; //! Crash
    

    //! Case2 : Deleted pointer
    
    std::cout <<std::endl;
    std::cout << "Deleted pointer" << std::endl;
    int * p_number1 {new int{67}};

    std::cout << "*p_number1(before delete) : " << *p_number1 <<std::endl;

    delete p_number1;

    std::cout << "*p_number1(after delete) : " << *p_number1 << std::endl;
    

    //! Case 3 : Multiple pointers pointing ta same address
    
    std::cout << std::endl;
    std::cout << "Case 3:  Multiple pointers pointing to same address : " << std::endl;
    int * p_number3 {new int{83}};
    int * p_number4 {p_number3};

    std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std::endl;
    std::cout << "p_number4 - " << p_number4 << " - " << *p_number4 << std::endl;

    //* Deleting pointer
    delete p_number3;

    //! p_number4 points deleted memory. Dereferning it will lead to
    //! undefined behavior :  Crash/ garbage or whatever
     std::cout << "p_number4(after deleting p_number3): " << p_number4 << " - " << *p_number4 << std::endl;
     

    //* Solution1 : Initialize your pointers immediately upon declaration
    
    std::cout << std::endl;
    std::cout << "Solution1 : " << std::endl;
    int *p_number5{nullptr};
    int *p_number6{new int{57}};

    //* Check for nullptr before use
    if (p_number6 != nullptr)
    {
        std::cout << "*p_number6 : " << *p_number6 << std::endl;
    }
    else
    {
        std::cout << "Invalid address" << std::endl;
    }

    std::cout << "Program ending well" << std::endl;

    //* Soution 2 :
    //* Right after you call delete on pointer , remember to reset
    //* the pointer to nullptr to make it Clear it doesn't point anywere
    
    std::cout << std::endl;
    std::cout << "Solution2 : " << std::endl;
    int *p_number7{new int{73}};

    //* Use the pointer however you want
    std::cout << "*p_number7 : " << p_number7 << " - " << *p_number7 << std::endl;

    delete p_number7;
    p_number7 = nullptr;

    //* Check the nullptr before use
    if(p_number7!= nullptr) {
        std::cout << "*p_nubmer7 : " << *p_number7 << std::endl;
    }else {
        std::cout << "Invalid address" <<std::endl;
    }
    

    //* Solution 3
    //* For multiple pointers pointing to the same  address, Make sure there is
    //* one clear pointer (master pointer) that owns the memory (responsible for releasing when
    //* neccesary) , other pointers should only be able to dereference when the master pointer valid
    
    std::cout << std::endl;
    std::cout << "Solution 3 :" << std::endl;

    int * p_nubmer8 {new int {344}}; //* Let's say p_number8 is the master pointer
    int * p_number9 {p_nubmer8};

    //* Dereference the pointers and use them
    std::cout << "p_number8 - "<< p_nubmer8 << " - " << *p_nubmer8 << std::endl;

    if(!(p_nubmer8 == nullptr)) { //* Only use slave pointers when master pointer is valid
        std::cout << "p_number9 - " << p_number9 << " - " <<  *p_number9 << std::endl;
    }

    delete p_nubmer8;
    p_nubmer8 = nullptr;


    if(!(p_nubmer8 == nullptr)) { //* Only use slave pointers when master pointer is valid
        std::cout << "p_number9 - " << p_number9 << " - " <<  *p_number9 << std::endl;
    }else {
        std::cerr << "WARNING : Trying to use an invalid pointer" << std::endl;
    }
    

    //! When 'new ' fails
    //*int  * data = new int[10000000000000000];
    
    for(size_t i{0}; i < 1000000 ; ++i) {
        int * data = new int [10000000000000000];
    }
    

    //* exception
    
    for (size_t i{0}; i < 1000000; ++i)
    {
        try
        {
            int *data = new int[10000000000000000];
        }
        catch (std::exception &ex)
        {
            std::cout << "Something went wrong : " << ex.what() << std::endl;
        }
    }
    
    //* std::nothrow
    
    for (size_t i{0}; i < 100; i++)
    {

        int *data = new (std::nothrow) int[10000000000000000];

        if (data != nullptr)
        {
            std::cout << "Data allocated : " << std::endl;
        }
        else
        {
            std::cout << "Data allocation falied" << std::endl;
        }
    }
    std::cout << "Program ending well" << std::endl;
    

    //* Null Pointer Safety
    
   //* Verbose nullptr check

   std::cout << std::endl;
   std::cout << "Verbose nullptr check: " << std::endl;
   int *p_number{}; //* Initialized to nullptr
   p_number = new int(21);


   if (!(p_number == nullptr)){
       std::cout << "p_number points to a Valid address : " << p_number << std::endl;
       std::cout << "p_number is :" << *p_number << std::endl;
   }else {
       std::cout << "p_number points to a Invalid address : " << std::endl;
   }
   
    
    if (p_number)
    {
        std::cout << "p_number points to a Valid address : " << p_number << std::endl;
        std::cout << "*p_number is : " << *p_number << std::endl;
    }
    else
    {
        std::cout << "p_number points to a Invalid address : " << std::endl;
    }
    delete p_number;
    p_number = nullptr;

    //* It is ok call delete a nullptr
    int *p_number1 {};

    //delete p_number1; // * This won't cause any problem
                     // * if p_number contains nullptr

    if(p_number1 != nullptr) {
         delete p_number1;
    } else  {
        std::cout << "p_number1 points to a Invalid address : " << std::endl;
    }
    

    //* Memory leaks
    
   int *p_number { new int {67}}; //* Points to some address, let's call that address1

   //! Should delete and reset here
   int number{55}; //* lives at address2 and it is stack variable
   p_number = &number; // * Now p_number points to address2 , but address1 is still in use by
                     //* our program.But our program has lost access to that memory location
                    //*  Memory has been leaked
    

    // * Double allocation
    
    int *p_number1{new int{55}};

    //*Use the pointer

    //* Should delete and reset here.

    p_number1 = new int{44}; //* Memory with int {55} leaked.

    delete p_number1;
    p_number1 = nullptr;
    

    // * Nested scopes with dynamically allocated memory
        
        {
            int *p_number2 {new int {57}};

            //* Use the dynamic memory 
        }   
            //! Memory with int{57} leaked
    std::cout << "Program ending well" << std::endl;
    

   //* Dynamic Arrays

    const size_t size{10};
    //* Different ways you can declare an array 
    //* dynamically and how they are initialized

    double *p_salaries {new double[size]}; //* salaries array wil 
                                                //* contain garbage values
    int *p_students { new(std::nothrow)  int[size]{}}; //* All values initializd to 0 

    double *p_scores { new(std::nothrow)  double[size]{1,2,3,4,5}}; //*Allocating memory space 
                                                                   //* for an array of size double
                                                                  //*vars. First 5 will be initialized
                                                                  //* with 1,2,3,4,5, and the 
                                                                  //* rest will be 0's

    //* nullptr check and use the allocated array
    if(p_scores){
        std::cout << "size of scores (it's a regular pointer)" << sizeof(p_scores) << std::endl;
        std::cout << " successfully allocated memory for scores." <<std::endl;

        //* Print out elements. Can use regular array access notation, or pointer arithmetic
        for(size_t i{}; i < size ; ++i) {
            std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl; 
        }
    }

    delete[] p_salaries;
    p_salaries = nullptr;

    delete[] p_students;
    p_students = nullptr;

    delete[] p_scores;
    p_scores = nullptr;


    //* Static arrays vs Dynamic arrays
    std::cout << "========================================" << std::endl; 
    int scores[10] {1,2,3,4,5,6,7,8,9,10}; //* Lives on the stack

    std::cout << "scores size : " << std::size(scores) << std::endl; 
    
    for (auto s : scores)
    {
        std::cout << "value : " << s << std::endl;
    }

    int *p_scores1 = new int[10] {1,2,3,4,5,6,7,8,9,10}; //* Lives on the heap
   //  std::cout << "scores size : " << std::size(p_scores1) << std::endl; 
    // for (auto i : p_scores1)
    // {
    //     std::cout << "value : " << p_scores1 << std::endl;
    // }
     
    return 0;
}