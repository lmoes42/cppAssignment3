#include "main.ih"

int main(int argc, char *argv[])
{

    // We are aware this displays the output twice,
    // however this is the best we can make of the exercise:
    //  "The function bool structCall receives main's
    //  argc and argv, storing combine's return value in a locally defined
    //  struct ReturnValues ...  If the requested argument does exists
    //  display its argument number and value"
    // And
    //  "Also define a function void boundCall
    //  which also receives main's argc and argv, and also calls
    //  combine, but itself does not define a struct ReturnValues.
    //  This function also displays the requested argument number and value.
    //  In main it is called after calling structCall. "

    if (argc > 1)
    {
        if (structCall(argc, argv)) boundCall(argc, argv);
    }
    else
        std::cout << "This program takes an integer and a list of arguments\n"
            << "./a.out n arg1 ... argn\n"
            << "Will return the nth argument.\n";
}
