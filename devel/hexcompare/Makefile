# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: devel/hexcompare/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	hexcompare
PORTVERSION=	1.0.2
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}%20v${PORTVERSION}
DISTNAME=	${PORTNAME}-102

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Compare and identify differences between two binary files

LICENSE=	GPLv3

PLIST_FILES=	bin/hexcompare

NO_STAGE=	yes
post-patch:
	${REINPLACE_CMD} -e 's|gcc|${CC}|g' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
