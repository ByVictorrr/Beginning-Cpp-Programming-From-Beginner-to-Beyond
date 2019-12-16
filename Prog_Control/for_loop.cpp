int calculate_sum() {
    //---- WRITE YOUR CODE BELOW THIS LINE
    
   
   int sum = 0;
    for(int i = 0; i < 16; i++)
        if (i % 2 != 0)
            sum += i;
    //---- WRITE YOUR CODE ABOVE THIS LINE
    //---- DO NOT MODIFY THE CODE BELOW
    return sum;
}
