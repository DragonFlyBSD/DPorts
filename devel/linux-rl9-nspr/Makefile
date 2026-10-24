PORTNAME=	nspr
PORTVERSION=	4.36.0
DISTVERSIONSUFFIX=	-8.el9
PORTREVISION=	1
CATEGORIES=	devel linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Netscape Portable Runtime (Rocky Linux ${LINUX_DIST_VER})
WWW=		https://developer.mozilla.org/docs/Mozilla/Projects/NSPR

USES=		linux:rl9
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes
WANT_LINUX32=	yes

SRC_DISTFILES=	nss-3.112.0-8.el9${SRC_SUFX}:SOURCE

CONFLICTS=	linux-c7-${PORTNAME}
DESCR=		${PORTSDIR}/${PKGCATEGORY}/${PORTNAME}/pkg-descr

.include <bsd.port.mk>
