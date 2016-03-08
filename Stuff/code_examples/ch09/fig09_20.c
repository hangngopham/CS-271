// Fig. 9.20: fig09_20.c
// Reading characters and strings
#include <stdio.h>

int main( void )
{ 
   char x;      
   char y[ 9 ]; 
   
   printf( "%s", "Enter a string: " );
   scanf( "%c%8s", &x, y );

   puts( "The input was:" );
   printf( "the character \"%c\" and the string \"%s\"\n", x, y );
} // end main




/**************************************************************************
 * (C) Copyright 1992-2013 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
