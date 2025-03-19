#include "kernel/sysinfo.h"
#include "user.h"

int main() {
  struct sysinfo info;

  if (sysinfo(&info) < 0) {
    printf("sysinfo failed\n");
    exit(1);
  }

  printf("Free memory: %d bytes\n", info.freemem);
  printf("Running processes: %d\n", info.nproc);
  exit(0);
}
