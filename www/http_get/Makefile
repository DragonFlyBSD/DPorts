# Created by: Aaron Zauner <az_mail@gmx.at>
# $FreeBSD: www/http_get/Makefile 341687 2014-01-29 07:57:45Z miwi $

PORTNAME=	http_get
PORTVERSION=	1.0.20100619
CATEGORIES=	www ipv6
MASTER_SITES=	http://www.acme.com/software/http_get/
DISTNAME=	${PORTNAME}_19jun2010

MAINTAINER=	masaki@club.kyutech.ac.jp
COMMENT=	Dump http-contents to stdout

WRKSRC=		${WRKDIR}/http_get
MAKEFILE=	${FILESDIR}/Makefile.bsd

PLIST_FILES=	bin/http_get \
		man/man1/http_get.1.gz

.ifndef NO_OPENSSL
USE_OPENSSL=	yes
.endif

.include <bsd.port.mk>
