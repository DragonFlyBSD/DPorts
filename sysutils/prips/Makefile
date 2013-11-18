# Created by: Jeremy Shaffner <jeremy@external.org>
# $FreeBSD: sysutils/prips/Makefile 333977 2013-11-16 03:33:37Z vanilla $

PORTNAME=	prips
PORTVERSION=	0.9.9
CATEGORIES=	sysutils
MASTER_SITES=	http://devel.ringlet.net/sysutils/prips/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Prints IP subnet ranges by list or CIDR

LICENSE=	GPLv2

MAKE_ENV+=	CFLAGS_WARN="-Wall -W"

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/prips ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/prips.1.gz ${STAGEDIR}${PREFIX}/man/man1/
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
