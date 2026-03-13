

int average_grade(int grades[], int len)
{
    int average;
    for (int i = 0; i < len; i++) 
    {
        average = 'F' - grades[i];
    }
    average /= len;
    return average;
}
