double my_pow(double value, int pow)
{
    int lhs, rhs;
    if (pow < 0) 
    {
        lhs = pow; 
        rhs = 0;
    }
    else 
    {
        lhs = 0; 
        rhs = pow;
    }
    
    double result = 1.0;
    for (int i = lhs; i < rhs; i++)
    {
        result *= value;
    }

    return pow < 0 ? (1 / result) : result;
}