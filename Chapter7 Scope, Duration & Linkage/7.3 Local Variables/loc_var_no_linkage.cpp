int main()
{
    int x { 2 }; // local variable, no linkage

    {
        int x { 3 }; // this declaration of x refers to a different object than the previous x
    }

    return 0;
}