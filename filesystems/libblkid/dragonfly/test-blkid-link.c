#include <stddef.h>
#include "blkid.h"

int main(void)
{
    blkid_cache cache = NULL;
    int status = blkid_get_cache(&cache, "/dev/null");

    if (status == 0)
        blkid_put_cache(cache);
    return status != 0;
}
