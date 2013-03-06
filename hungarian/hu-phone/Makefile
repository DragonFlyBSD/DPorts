# Created by: janos.mohacsi@bsd.hu
# $FreeBSD: ports/hungarian/hu-phone/Makefile,v 1.8 2013/01/09 20:04:49 svnexp Exp $

PORTNAME=	phone
PORTVERSION=	20020622
CATEGORIES=	hungarian
MASTER_SITES=	http://ipv6.niif.hu/~mohacsi/downloads/
PKGNAMEPREFIX=	hu-
DISTNAME=	korzetszam.2002.06.22
EXTRACT_SUFX=	.gz

MAINTAINER=	jmohacsi@bsd.hu
COMMENT=	Phone codes in Hungary / Magyarorszagi korzetszamok

PLIST_FILES=	share/misc/hu.phone
NO_WRKSUBDIR=	YES
EXTRACT_CMD=	${GZCAT}
EXTRACT_BEFORE_ARGS=	# None
EXTRACT_AFTER_ARGS=	> ${WRKSRC}/hu.phone
NO_BUILD=	YES

do-install:
	${INSTALL_DATA} ${WRKSRC}/hu.phone ${PREFIX}/share/misc

.include <bsd.port.mk>
