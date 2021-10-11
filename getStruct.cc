// Take argv and the argument and put it in a struct
// This function is only supposed to be used if ok == true
ReturnValues getStruct(char *argv[], int argument)
{

    ReturnValues result;

    result.ok = true;
    result.nr = argument;
    result.value = argv[argument];

    return result;
}

