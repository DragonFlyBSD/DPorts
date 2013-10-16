# Created by: stas
# $FreeBSD: www/mod_proctitle/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	mod_proctitle
PORTVERSION=	0.4.1
PORTREVISION=	0
CATEGORIES=	www
MASTER_SITES=	ftp://ftp.springdaemons.com/soft/
PKGNAMEPREFIX=	${APACHE_PKGNAMEPREFIX}

MAINTAINER=	apache@FreeBSD.org
COMMENT=	Set httpd process titles to reflect currently processed request


USE_APACHE=	22+
GNU_CONFIGURE=	yes
USE_BZIP2=	yes

CFLAGS+=	-I${LOCALBASE}/include \
		-I${LOCALBASE}/include/apr-1

PLIST_FILES=	${APACHEMODDIR}/${PORTNAME}.so

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/.libs/mod_proctitle.so \
		${PREFIX}/${APACHEMODDIR}/

.include <bsd.port.mk>
