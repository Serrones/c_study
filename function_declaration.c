/*
Same variable declaration concept applies on function declaration where you
provide a function name at the time of its declaration and its actual
definition can be given anywhere else.
*/

// function declaration
int func();
int main()
{
    // function call
    int i = func();
}
// function definition
int func()
{
    return 0;
}