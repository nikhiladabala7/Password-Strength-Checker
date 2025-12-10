#include<stdio.h>

/* Function declarations */

int stringLength(char str[]);            
int isUpper     (char c);
int isLower     (char c);
int isDigit     (char c);
int isSpecial   (char c);


int main() {                             

    char password[100];

     /* Flags to check different character types */

    int Length, hasUpper=0, hasLower=0, hasDigit=0, hasSpecial=0; 
    
    printf("Enter the password: "); 
    scanf ("%s", password);

    /* Find length of the password */

    Length = stringLength(password);

    /* Loop through each character in the password */
     for (int i = 0; i < Length; i++)  {

        if (isUpper(password[i]))               // check uppercase
            hasUpper = 1;

        else if (isLower(password[i]))          // check lowercase
            hasLower = 1; 

        else if (isDigit(password[i]))          // check digit
            hasDigit = 1;

        else if (isSpecial(password[i]))        // check special character
            hasSpecial = 1;   

    }

    /* Check password strength conditions */

    if (Length >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) 
        
      { printf("password type: Strong\n"); }

    else if (Length >= 6 && ((hasUpper || hasLower) && hasDigit)) 
       
      { printf("password type: Medium\n"); }

    else 
    
      { printf ("password type: Weak\n");  }
      
      
     
}

int stringLength(char str[])  {    // Function to find length of a string

     int i = 0;

     while (str[i] != '\0')
            i++;
        
     return i;    

    }

int isUpper(char c)   {            //  Check if character is uppercase 
 
     if (c >= 'A' && c <= 'Z')

     return 1;
     return 0;

}

int isLower(char c)   {            //  Check if character is lowercase
 
     if (c >= 'a' && c <= 'z')

     return 1;
     return 0;

}

int isDigit(char c)   {            //  Check if character is digit
 
     if (c >= '0' && c <= '9')

     return 1;
     return 0;

}

int isSpecial(char c)   {         //  Check if character is special character
 
     if ((c >= 33 && c <= 47) ||
         (c >= 58 && c <= 64) ||
         (c >= 91 && c <= 96) ||
         (c >= 123 && c <= 126))

     return 1;
     return 0;

}     
