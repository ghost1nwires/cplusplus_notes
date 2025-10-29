int add(int x, int y) // integer version
{
    return x + y;
}

double add(double x, double y) // floating point version
{
    return x + y;
}

int main()
{
    add(1, 2);       // calls integer version 
    add(1.1, 2.2); // calls floating point version
    return 0;
}