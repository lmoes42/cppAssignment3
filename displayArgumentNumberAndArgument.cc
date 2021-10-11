void displayArgumentNumberAndArgument(char *argv[])
{
    int argument = getArgument(argv);
    std::cout << argument + 1 << ": " << argv[argument] << '\n';
}

