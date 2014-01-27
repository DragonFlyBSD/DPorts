# Created by: Andrew Turner <zombie@i4free.co.nz>
# $FreeBSD: sysutils/dwatch/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	dwatch
PORTVERSION=	0.1.1
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	http://siag.nu/pub/dwatch/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Daemon Watcher

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

PLIST_FILES=	bin/dwatch etc/dwatch.conf-dist man/man1/${PORTNAME}.1.gz

CFLAGS+=	-DETCDIR="\"${PREFIX}/etc\"" \
		-DPS="\"/bin/ps -ax\""

do-build:
	(cd ${BUILD_WRKSRC}; ${CC} ${CFLAGS} -o dwatch dwatch.c)

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dwatch ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/dwatch.1 ${STAGEDIR}${MANPREFIX}/man/man1
	${INSTALL_DATA} ${WRKSRC}/dwatch.conf ${STAGEDIR}${PREFIX}/etc/dwatch.conf-dist

.include <bsd.port.mk>
