// The structCall function defined in the exercise,
// it seems we are supposed to have
//  1) a ReturnValues struct which is locally defined
//     (i.e. it cannot be used outside of the function)
//  2) can still be accessed in a different function
// As far as we have been able to figure out it is either one
// or the other.
bool structCall(int argc, char *argv[])
{
    int argument = getArgument(argv);
    bool ok = (argument < argc ? true : false);

    if (ok)
    {
        displayArgumentNumberAndArgument(argv);
        ReturnValues output = getStruct(argv, argument);
        return output.ok;
    }

    std::cerr << "Error: Requested argument does not exist.\n";
    return false;
}
