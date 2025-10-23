#include <stdio.h>
#include <math.h>
#include <string.h>


void addition()
{
    float d , temp;
    int n , i , l;

    printf("How many numbers would you like to add! \n");
    scanf("%d" , &n);
    d = 0;
    
    for (i =0 ; i < n; i = i+1)
    {
        printf("Enter number %d \n" , i + 1);
        scanf("%f" , &temp);
        d = d + temp;
    }
    
    printf(" the sum of the numbers is %f \n" , d);
}

void multiplication()
{
    float d , temp;
    int n , i , l;

    printf("How many numbers would you like to multiply! \n");
    scanf("%d" , &n);
    d =1;

    for (i =0 ; i < n; i = i+1)
    {
        printf("Enter number %d \n" , i + 1);
        scanf("%f" , &temp);
        d = d*temp;
    }
    
    printf(" the product of the numbers is %f \n" , d);
    
}

void subtraction()
{
    float d , temp;
    int n , i , l;

    printf("How many numbers would you like to subtract! \n");
        scanf("%d" , &n);
        
        
        printf("enter the first number from which the rest of the numbers are subtracted from \n");
        scanf("%f" , &d);

        for (i =0 ; i < n -1 ; i = i+1)
        {
            printf("Enter number %d \n" , i + 1);
            scanf("%f" , &temp);
            d = d - temp;
        }
        
        printf(" the difference of the numbers is %f \n" , d);

}

void division()
{
    float d , temp;
    int n , i , l;

    printf("How many numbers would you like to divide! \n");
    scanf("%d" , &n);
    
    printf("enter the first number from which all the other numbers will be divided from \n");
    scanf("%f" , &d);

    for (i =0 ; i < n -1; i = i+1)
    {
        printf("Enter number %d \n" , i + 1);
        scanf("%f" , &temp);
        d = d/temp;
    }
    
    printf(" the division of the numbers is %f \n" , d);
    
}

void factorial()
{
    float d , temp;
    int n , i , l;

    printf("Enter the number to find the factorial \n");
    scanf("%d" , &n);
    l =1;
    
    if (n < 0)
    {
       printf("The factorial isnt defined \n");
    }
    else 
    {
        for (i =1 ; i < n+1 ; i++)
        {
           l = l*i;
        }
    printf("The factorial of the number is %d \n" , l);
    }
}

void power()
{
    int power , i ;
    float base , answer =1;

   printf("Enter the base \n");
   scanf("%f" , &base);
   printf("Enter the power \n");
   scanf("%d" , &power);

   if (power >= 0)
   {
      for (i = 1 ; i < power +1 ; i++)
      {
         answer = answer* base;
      }
   
      printf("The answer is %f \n" , answer); 
   }
   else if (power < 0)
   {
       for (i = 1 ; i <= -power  ; i++)
   {
        answer = answer* base;
   }
   
   printf("The answer is %f \n" , 1/answer); 

}
}

void average()
{
    float d , temp;
    int n , i , l;

    printf("How many numbers would you like to add to ind the average! \n");
    scanf("%d" , &n);
    d = 0;
    
    for (i =0 ; i < n; i = i+1)
    {
        printf("Enter number %d \n" , i + 1);
        scanf("%f" , &temp);
        d = d + temp;
    }
    
    printf(" the average of the numbers is %f \n" , d/n);
   
}

void Square_root()
{
   float user_input , square_root;
    printf("Enter the number for square root \n");
    scanf("%f" , &user_input);

    if (user_input < 0)
    {
        printf("square root doesnt exists for numbers below 0 \n");
    }
    else if (user_input >= 0)
    {
        float z = sqrt(user_input);
        printf("Square root of this number is %f\n" ,z );
    }

}

void trignometry_sin()
{
    float angle;
     char angle_type;
     
     printf("Enter the angle to find sin \n");
     scanf("%f" , &angle);

     printf("The angle entered is in radians or degree ? \n");
     printf("Enter r if radians and d if degrees \n");
     scanf(" %c" , &angle_type);

     if (angle_type == 'r')
     {
        float z = sin(angle);
        printf("The sin of angle %f radians is %f \n" , angle ,z);
     }

     else if (angle_type == 'd')
     {
        float test = angle*3.14/180;
        float z = sin(test); 
        printf("The sin of angle %f degrees is %f \n" , angle ,z);

     }
     else 
     {
        printf("Wrong angle type \n");
     }
}

void trignometry_cos()
{
    float angle;
     char angle_type;
     
     printf("Enter the angle to find cos \n");
     scanf("%f" , &angle);

     printf("The angle entered is in radians or degree ? \n");
     printf("Enter r if radians and d if degrees \n");
     scanf(" %c" , &angle_type);

     if (angle_type == 'r')
     {
        float z = cos(angle);
        printf("The cos of angle %f radians is %f \n" , angle ,z);
     }

     else if (angle_type == 'd')
     {
        float test = angle*3.14/180;
        float z = cos(test); 
        printf("The cos of angle %f degrees is %f \n" , angle ,z);

     }
     else 
     {
        printf("Wrong angle type \n");
     }
}

void trignometry_tan()
{
float angle;
     char angle_type;
     
     printf("Enter the angle to find tan \n");
     scanf("%f" , &angle);

     printf("The angle entered is in radians or degree ? \n");
     printf("Enter r if radians and d if degrees \n");
     scanf(" %c" , &angle_type);

     if (angle_type == 'r')
     {
        float z = tan(angle);
        printf("The tan of angle %f radians is %f \n" , angle ,z);
     }

     else if (angle_type == 'd')   
     {
        float test = angle*3.14/180;
        float z = tan(test); 
        printf("The tan of angle %f degrees is %f \n" , angle ,z);

     }
     else 
     {
        printf("Wrong angle type \n");
     }

}


void output()
{
   printf("Hello welcome to your personal calculator coded in C! \n");

   printf("----------------------------------\n");
   printf("Choose an operation by entering one of the following symbols or keywords:\n\n");
    
   printf("Basic Arithmetic:\n");
   printf("  +   : Addition (works for 2 or more numbers)\n");
   printf("  -   : Subtraction (first - second - ...)\n");
   printf("  *   : Multiplication (works for 2 or more numbers)\n");
   printf("  /   : Division (first ÷ second ÷ ...)\n\n");

   printf("Advanced Operations:\n");
   printf("  ^   : Power (base ^ exponent)\n");
   printf("  r   : Square Root\n");
   printf("  avg : Average of multiple numbers\n");
   printf("  Fac : Find the factorial of a number\n");

   printf("Trigonometric Functions (input in radians):\n");
   printf("  s   : Sine\n");
   printf("  c   : Cosine\n");
   printf("  t   : Tan\n\n");

   printf("Enter your operation to proceed: ");
   char User_input[20];
   scanf("%s" , User_input);
   
   if (strcmp(User_input , "+") == 0)
   {
    addition();
   }

   else if (strcmp(User_input , "-") == 0)
   {
    subtraction();
   }

   else if (strcmp(User_input , "*") == 0)
   {
    multiplication();
   }

   else if (strcmp(User_input , "/") == 0)
   {
    division();
   }

   else if (strcmp(User_input , "^") == 0)
   {
    power();
   }

   else if (strcmp(User_input , "r") == 0)
   {
    Square_root();
   }

   else if (strcmp(User_input , "avg") == 0)
   {
    average();
   }

   else if (strcmp(User_input , "Fac") == 0)
   {
    factorial();
   }

   else if (strcmp(User_input , "s") == 0)
   {
    trignometry_sin();
   }
   
   else if (strcmp(User_input , "c") == 0)
   {
    trignometry_cos();
   }

   else if (strcmp(User_input , "t") == 0)
   {
    trignometry_tan();
   }
   
   else 
   {
    printf("wrong operator type \n");
   }

   
}

int main()
{
  char output_char[100];

  do 
  {
    output();
    printf("do you wanna do another calculation (yes/no) ?\n");
    scanf("%s" , output_char);
  }
  while (strcmp(output_char , "yes") == 0 );

  
   printf("Thanks for using the calculator! \n");
   
   return 0;
}





//ABOUT THE CALCULATOR


//Basic arithmetic operators (+, -, *, /)
//Advanced functions added (^, avg, Fac, r)
//Basic Trigonometry (s, c, t)
//A menu system and repeat loop
//Modular structure with separate functions



//Things that can be improved/changed

//pie as 3.14 could be substituted by M_PI by   #define _USE_MATH_DEFINES
//more functions and operators could be added
//power function could be changed so it can calculate decimal powers( it uses a loop function at the moment instead of the math.h func)
// equation solver can be added