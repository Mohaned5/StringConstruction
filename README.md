# StringConstruction

- You are given as input a target string. Starting with an empty string, you add characters to it, until your new string is same as the target. There are two options in which you can add characters to the empty string:
1. You can append an arbitrary character to your new string, with cost x OR
2. You can clone any substring of your new string (as it stands at that point), and append it to the end of your new string, with cost y
- For a given target you’ll be given an append cost x and a clone cost y. At the end of the process, we want to know what is the *cheapest cost* of building the target string
  
For some simple examples:
- Target "aa" that has append cost 1, clone cost 2: the cheapest cost is 2:
- Start with an empty string, ""
- Append 'a' (cost 1), giving the string "a"
- Append 'a' (cost 1), giving the string "aa"
- Target "aaaa" that has append cost 2, clone cost 3: the cheapest cost is 7:
- Start with an empty string, ""
- Append 'a' (cost 2), giving the string "a"
- Append 'a' (cost 2), giving the string "aa"
- Clone "aa" (cost 3), giving the string "aaaa"
- Target "xzxpzxzxpq", append cost 10, clone cost 11: the cheapest cost is 71:
- Start with an empty string, ""
- Append 'x' (cost 10): "x"
- Append 'z' (cost 10): "xz"
- Append 'x' (cost 10): "xzx"
- Append 'p' (cost 10): "xzxp"
- Append 'z' (cost 10): "xzxpz"
- Clone "xzxp" (cost 11): "xzxpzxzxp"
- Append 'q' (cost 10) : "xzxpzxzxpq"
`stringConstruction` takes the target string, the clone cost, and the append cost (in that order!) and returns the cheapest way of making the target string.

