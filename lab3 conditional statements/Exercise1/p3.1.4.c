//4) find the error in given program


int main() 
{                               //complier cannot know printf() or scanf() unless we include stdio header file
    int i = 3; 
    printf("%d", (++i)++); 
    return 0; 
} 
