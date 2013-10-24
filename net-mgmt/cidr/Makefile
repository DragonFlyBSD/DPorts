# Created by: Domas Mituzas <midom@dammit.lt>
# $FreeBSD: net-mgmt/cidr/Makefile 331308 2013-10-22 19:50:00Z ehaupt $

PORTNAME=	cidr
PORTVERSION=	2.3.2
PORTREVISION=	1
CATEGORIES=	net-mgmt
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	RFC 1878 subnet calculator / helper

LICENSE=	GPLv2

PLIST_FILES=	bin/cidr man/man1/cidr.1.gz

do-build:
	${CC} ${CFLAGS} ${WRKSRC}/${PORTNAME}.c -o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
