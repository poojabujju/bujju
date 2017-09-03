int main()
{
    char    string[100];
    int countDigits,countAlphabet,countSpecialChar,countSpaces;
    int counter;
 

    countDigits=countAlphabet=countSpecialChar=countSpaces=0;
 
    printf("Enter a stringing: ");
    gets(string);
 
    for(counter=0;string[counter]!=NULL;counter++)
    {
 
        if(string[counter]>='0' && string[counter]<='9')
            countDigits++;
        else if((string[counter]>='A' && string[counter]<='Z')||(string[counter]>='a' && string[counter]<='z'))
            countAlphabet++;
        else if(string[counter]==' ')
            countSpaces++;
        else
            countSpecialChar++;
    }
 
    printf("Special Characters: %d",countSpecialChar);
 
    return 0;
}
