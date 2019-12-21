#include <err.h>

int main(void)
{
  errx(1, "webcamd is not implemented on DragonFly, abort\n");

  return 1;
}
