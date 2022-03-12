#include<stdio.h>

int main()
{


int friends = 1;
printf("I have %d friend%s", friends,(friends!=1) ? "s" : ""  );

return 0;

}

/*This program is simply meaning that if i have more than one friend it will simply insert "friends" on the screen else it will insert "friend"
"%s" statements have to be given for determining if I have more than one friend or not. */
