/** 
 * Exercise 1.1:
 *      Review the documentation for your compiler and determine what file
 *      naming convention it uses. Compile and run the main program from page 2.
 * Answer:
 *      I use "g++ main.c"
 **/
  
/**
 * Exercise 1.2:
 *      Change the program to return -1. A return value of -1 is often treated
 *      as an indicator that the program failed. Recompile and rerun your program to see how
 *      your system treats a failure indicator from main.
 * Note:
 *      For linux, you can use "echo $?" to verify the returned value,
 *      while using "echo %ERRORLEVEL%" in windows.
 **/

int main(void)
{
    return -1;
}