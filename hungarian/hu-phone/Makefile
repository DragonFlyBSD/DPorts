# Created by: janos.mohacsi@bsd.hu
# $FreeBSD: hungarian/hu-phone/Makefile 327735 2013-09-20 18:43:02Z bapt $

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

NO_STAGE=	yes
do-install:
	${INSTALL_DATA} ${WRKSRC}/hu.phone ${PREFIX}/share/misc

.include <bsd.port.mk>
