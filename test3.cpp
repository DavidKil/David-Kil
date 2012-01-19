#include <iostream>
#include <ctime> 
 
int main() 
{
   struct std::tm a = {0,0,0,24,5,104}; /* June 24, 2004 */
   struct std::tm b = {0,0,0,5,6,104}; /* July 5, 2004 */
   std::time_t x = std::mktime(&a);
   std::time_t y = std::mktime(&b);
   if ( x != (std::time_t)(-1) && y != (std::time_t)(-1) )
   {
	 double difference = std::difftime(y, x) / (60 * 60 * 24);
	 std::cout << std::ctime(&x);
	 std::cout << std::ctime(&y);
	 std::cout << "difference = " << difference << " days" << std::endl;
   }
   return 0; 
}
 
/* my output
Thu Jun 24 01:00:00 2004
Mon Jul 05 01:00:00 2004
difference = 11 days
*/
 