#include <common.h>

#include <transform.h>

int main(int argc, char *argv[])
{
    // create memory space
    std::string result;

START_LOOP:
    // get input
    std::string operation_code;
    long long num;
    std::cin >> num >> operation_code;

    // transform
    result = Generate114::Transform(num, argv[1] == "-d" || argv[1] == "--debug");

    // print
    std::cout << "The result is : " << result << std::endl;

    if (operation_code == "-q" || operation_code == "--quit")
        return 0;
    else if (operation_code == "-c" || operation_code == "--continue")
        goto START_LOOP;
    else
        std::cout << "Invalid operation code!" << std::endl;
    return 0;
    
}