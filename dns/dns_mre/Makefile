# Created by: Tomoyuki Sakurai <cherry@trombik.org>
# $FreeBSD: dns/dns_mre/Makefile 339521 2014-01-12 16:40:58Z mat $

PORTNAME=	dns_mre
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	dns security
MASTER_SITES=	http://www.securebits.org/tools/
DISTNAME=	${PORTNAME}-v${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DNS Cache Poisoner/Overwriter

NO_WRKSUBDIR=	Yes

PLIST_FILES=	bin/dns_mre

do-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} -Wall main.c dns_mre.c -o dns_mre

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dns_mre ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
