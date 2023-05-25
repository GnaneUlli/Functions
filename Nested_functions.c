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
  
  
  /* The functions are only called in main() functions but here the main() function calls the italy() function which calls the other 
  functions so all of the functions will be called even if they are not called in main function.
