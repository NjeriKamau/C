
// Implement a function which convert the given boolean value into its string representation.

#include <stdbool.h>

//The returned string should be statically allocated and it won't be freed
const char *boolean_to_string(bool b)
{
//     return "excluded middle"; // your code here
  if(b == 1){
    return "true";
  }else return "false";
}