# Created by: Sergey Lyubka (valenok@gmail.com)
# $FreeBSD: www/shttpd/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	shttpd
PORTVERSION=	1.42
CATEGORIES=	www
MASTER_SITES=	SF
DISTNAME=	shttpd-${PORTVERSION}

MAINTAINER=	valenok@gmail.com
COMMENT=	Small, fast, embeddable web server with CGI, SSL, Authorization

MAN1=		shttpd.1
ALL_TARGET=	unix
MAKE_ENV=	LIBS=-lpthread
BUILD_WRKSRC=	${WRKSRC}/src

PLIST_FILES=	bin/shttpd

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/shttpd ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/src/shttpd.1 ${MANPREFIX}/man/man1

.include <bsd.port.mk>
