# StringConstruction

StringConstruction is a utility that helps determine the cheapest cost of building a target string. The process involves adding characters to an initially empty string with two options: appending an arbitrary character with a given append cost or cloning any substring of the current string and appending it with a specified clone cost.

## Example

Consider the following examples:

Target "aa" with append cost 1 and clone cost 2:
Start with an empty string, ""
Append 'a' (cost 1), giving the string "a"
Append 'a' (cost 1), giving the string "aa"
The cheapest cost is 2.
Target "aaaa" with append cost 2 and clone cost 3:
Start with an empty string, ""
Append 'a' (cost 2), giving the string "a"
Append 'a' (cost 2), giving the string "aa"
Clone "aa" (cost 3), giving the string "aaaa"
The cheapest cost is 7.
Target "xzxpzxzxpq" with append cost 10 and clone cost 11:
Start with an empty string, ""
Append 'x' (cost 10): "x"
Append 'z' (cost 10): "xz"
Append 'x' (cost 10): "xzx"
Append 'p' (cost 10): "xzxp"
Append 'z' (cost 10): "xzxpz"
Clone "xzxp" (cost 11): "xzxpzxzxp"
Append 'q' (cost 10): "xzxpzxzxpq"
The cheapest cost is 71.

## How to Use

To use the StringConstruction utility, include the header file and use the stringConstruction function as follows:

    #include "StringConstruction.h"
    #include <iostream>
    
    int main() {
        // Define the target string and costs
        std::string target = "aa";
        int cloneCost = 2;
        int appendCost = 1;
    
        // Calculate the cheapest cost
        int min_cost = stringConstruction(target, cloneCost, appendCost);
    
        // Display the result
        std::cout << "Cheapest cost to build the target string: " << min_cost << std::endl;
    
        return 0;
    }
  
Make sure to replace the example target string and costs with your desired input. Feel free to integrate this utility into your code to find the most cost-effective way of building a target string.
