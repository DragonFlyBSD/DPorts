
#include <sys/types.h>
#include <sys/extattr.h>

#include <assert.h>
#include <errno.h>
#include <string.h>

///
/// xattr is a Linux kernel API; map it to the extattr API where DragonFly
/// has it. DragonFly's libc only implements extattr_{get,set,delete}_file
/// (the *_fd and *_list variants are declared but not provided), so the
/// fd-based calls report ENOTSUP and librepo falls back to not caching
/// checksums in extended attributes.
///

ssize_t getxattr(const char *path, const char *name,
                              void *value, ssize_t size, u_int32_t position,
                              int options)
{
        return extattr_get_file(path, EXTATTR_NAMESPACE_USER,
                                name, value, size);
}

int fsetxattr(int fd, const char *name, const void *value, size_t size, int flags) {
	assert(flags == 0); // we do not handle flags here and the project currently doesn't use flags!=0

	errno = ENOTSUP;
	return -1;
}

ssize_t flistxattr(int fd, char *namebuf, size_t size) {
	errno = ENOTSUP;
	return -1;
}

ssize_t fgetxattr(int fd, const char *name, void *value, size_t size) {
	errno = ENOTSUP;
	return -1;
}

int fremovexattr(int fd, const char *name) {
	errno = ENOTSUP;
	return -1;
}
