#include "types.h"
#include "stat.h"
#include "user.h"
 
int main(void) {
    printf(1, "return val of system call is %d\n", helloworld());
    printf(1, "Congrats !! You have successfully added new system  call in xv6 OS :) \n");
    exit();
 }