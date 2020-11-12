double my_pow(double value, int pow)
{
   double result = 1;
	while (pow) 
    {
		if (pow % 2 == 1)
            result *= value;
		
        value *= value;
		pow /= 2;
	}

	return result;
}