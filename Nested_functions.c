# include <stdio.h>
void italy( ) ;
void brazil( ) ; 
void argentina( ) ;
int main( )
{
printf ( "I am in main\n" ) ;
italy( ) ;
printf ( "I am finally back in main\n" ) ;
return 0 ;
}
void italy( ) 
{
printf ( "I am in italy\n" ) ;
brazil( ) ;
printf ( "I am back in italy\n" ) ;
}
void brazil( ) 
{
printf ( "I am in brazil\n" ) ;
argentina( ) ;
}
void argentina( ) 
{
printf ( "I am in argentina\n" ) ;
}
  
/* The functions are not even called in main() functions but here the main() function calls the italy() function which calls the other 
  functions so all of the functions will be called even if they are not called in main function.*/
  
//Any function can be called from any other function. Even main( )
//can be called from other functions. For example,

# include <stdio.h>
void message( ) ;
int main( )
{
message( ) ;
return 0 ;
}
void message( )
{
printf ( "Can't imagine life without C\n" ) ;
main( ) ; 
}

//A function can be called from another function, but a function 
//cannot be defined in another function. 

/* Sending and receiving values between functions */ 
# include <stdio.h>
int calsum ( int x, int y, int z ) ;
int main( )
{
int a, b, c, sum ;
printf ( "Enter any three numbers " ) ;
scanf ( "%d %d %d", &a, &b, &c ) ;
sum = calsum ( a, b, c ) ;
printf ( "Sum = %d\n", sum ) ;
return 0 ;
}
int calsum ( int x, int y, int z )
{
int d ;
d = x + y + z ;
return ( d ) ;
}
