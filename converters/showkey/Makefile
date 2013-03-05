# Created by: trevor
# $FreeBSD: ports/converters/showkey/Makefile,v 1.7 2013/01/27 06:41:37 svnexp Exp $

PORTNAME=	showkey
PORTVERSION=	1.5
CATEGORIES=	converters
MASTER_SITES=	http://catb.org/~esr/showkey/ \
		http://www.c-s.li/ports/

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Prints its input, with escapes such as "<NUL>"

LICENSE=	MIT

USE_GMAKE=	yes
MAKE_ARGS=	CC="${CC} ${CFLAGS}"
ALL_TARGET=	showkey

MAN1=		showkey.1
PLIST_FILES=	bin/showkey

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/showkey ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/showkey.1 ${MANPREFIX}/man/man1

.include <bsd.port.mk>
