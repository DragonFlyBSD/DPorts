# Ports Linux compatibility framework

.ifndef _INCLUDE_USES_LINUX_MK
_INCLUDE_USES_LINUX_MK=	yes

IGNORE=	Linux emulation is not supported on DragonFly

LINUX_ARCH=		x86_64
PKGNAME_PREFIX?=	linux-${linux_ARGS}-

.endif
