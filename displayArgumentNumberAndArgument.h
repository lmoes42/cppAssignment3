void displayArgumentNumberAndArgument(char *argv[])
{
    size_t argument = getArgument(argv);
    std::cout << argument + 1 << ": " << argv[argument] << '\n';
}

