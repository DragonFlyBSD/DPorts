PORTREVISION=	2	# don't delete, reset to 0
CATEGORIES=	net
PKGNAMESUFFIX=	-autoipd

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	IPv4LL network address configuration daemon

LIB_DEPENDS=	libavahi-common.so:net/avahi-app \
		libdaemon.so:devel/libdaemon

USERS=		avahi-autoipd
GROUPS=		${USERS}

MASTERDIR=	${.CURDIR}/../avahi-app
BUILD_WRKSRC=	${WRKSRC}/avahi-autoipd
INSTALL_WRKSRC=	${BUILD_WRKSRC}
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

AVAHI_SLAVE=	autoipd

MANPAGES=	avahi-autoipd.8

dfly-patch:
	${REINPLACE_CMD} -e 's/^#ifdef __FreeBSD__$$/#if defined(__FreeBSD__) || defined(__DragonFly__)/' \
		${WRKSRC}/avahi-autoipd/main.c

.include "${MASTERDIR}/Makefile"
