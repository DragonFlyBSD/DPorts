# New ports collection makefile for:	Phone codes in Hungary
# Date created:         2002-06-22
# Whom:                 janos.mohacsi@bsd.hu
#
# $FreeBSD: ports/hungarian/hu-phone/Makefile,v 1.7 2012/11/17 05:58:27 svnexp Exp $
#

PORTNAME=	phone
PORTVERSION=	20020622
CATEGORIES=	hungarian
MASTER_SITES=	http://ipv6.niif.hu/~mohacsi/downloads/
PKGNAMEPREFIX=	hu-
DISTNAME=	korzetszam.2002.06.22
EXTRACT_SUFX=	.gz

MAINTAINER=	janos.mohacsi@bsd.hu
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
