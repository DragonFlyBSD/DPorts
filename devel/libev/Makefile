# Created by: vsevolod
# $FreeBSD: devel/libev/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	libev
PORTVERSION=	4.15
PORTEPOCH=	1
CATEGORIES=	devel
MASTER_SITES=	http://dist.schmorp.de/libev/ \
		http://dist.schmorp.de/libev/Attic/

MAINTAINER=	vsevolod@FreeBSD.org
COMMENT=	Full-featured and high-performance event loop library

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES=		pkgconfig

PKGCONFIGDIR?=	${PREFIX}/libdata/pkgconfig

post-patch:
	@${SED} -e 's|%PREFIX%|${PREFIX}|g ; s|%VERSION%|${PORTVERSION}|g' \
		${FILESDIR}/libev.pc.in > ${WRKDIR}/libev.pc

post-install:
	@${INSTALL_DATA} ${WRKDIR}/libev.pc ${STAGEDIR}${PKGCONFIGDIR}/

.include <bsd.port.mk>
