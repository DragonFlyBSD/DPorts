# New ports collection makefile for:	mod_proctitle
# Date created:				15 April 2007
# Whom:					stas
#
# $FreeBSD: ports/www/mod_proctitle/Makefile,v 1.14 2012/11/17 06:02:41 svnexp Exp $
#

PORTNAME=	mod_proctitle
PORTVERSION=	0.4.1
PORTREVISION=	0
CATEGORIES=	www
MASTER_SITES=	ftp://ftp.springdaemons.com/soft/
PKGNAMEPREFIX=	${APACHE_PKGNAMEPREFIX}

MAINTAINER=	apache@FreeBSD.org
COMMENT=	Set httpd process titles to reflect currently processed request

MAKE_JOBS_SAFE=  yes

USE_APACHE=	22+
GNU_CONFIGURE=	yes
USE_BZIP2=	yes

CFLAGS+=	-I${LOCALBASE}/include \
		-I${LOCALBASE}/include/apr-1

PLIST_FILES=	${APACHEMODDIR}/${PORTNAME}.so

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/.libs/mod_proctitle.so \
		${PREFIX}/${APACHEMODDIR}/

.include <bsd.port.mk>
