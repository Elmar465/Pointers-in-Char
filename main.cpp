#include <iostream>

int main()
{

    //* Declare and initialize pointers
    /*
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
    */
    /*
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
    */
    //* Pointer to char 
    /*
    const char* message {"Hello world"};

    std::cout << "Messagge : " << message << std::endl;
    
    //! *meesage = "B" // Compile Error
    std::cout << "*message : " << *message << std::endl;

    // * Allow users to modify the string 
    char message1[] {"Hello world"};
    message1[0] = 'B';
    std::cout << "message1 : " << message1 << std::endl;
    */

   
    return 0;
}