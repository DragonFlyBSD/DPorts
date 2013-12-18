# Created by: stas
# $FreeBSD: www/mod_proctitle/Makefile 336555 2013-12-15 16:45:38Z ohauer $

PORTNAME=	mod_proctitle
PORTVERSION=	0.4.1
CATEGORIES=	www
MASTER_SITES=	ftp://ftp.springdaemons.com/soft/
PKGNAMEPREFIX=	${APACHE_PKGNAMEPREFIX}

MAINTAINER=	apache@FreeBSD.org
COMMENT=	Set httpd process titles to reflect currently processed request

LICENSE=	BSD

USE_APACHE=	22+
GNU_CONFIGURE=	yes
USE_BZIP2=	yes

CFLAGS+=	-I${LOCALBASE}/include \
		-I${LOCALBASE}/include/apr-1

PLIST_FILES=	${APACHEMODDIR}/${PORTNAME}.so

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${APACHEMODDIR}
	${INSTALL_PROGRAM} ${WRKSRC}/src/.libs/mod_proctitle.so \
		${STAGEDIR}${PREFIX}/${APACHEMODDIR}

.include <bsd.port.mk>
