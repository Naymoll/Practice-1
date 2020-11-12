double my_pow(double value, unsigned int pow)
{
    double result = 1.0;
    for (unsigned int i = 0; i < pow; i++)
    {
        result *= value;
    }

    return result;
}