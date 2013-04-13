# Created by: G. Adam Stanislav <adam@whizkidtech.net>
# $FreeBSD: misc/felis/Makefile 315240 2013-03-25 18:44:20Z eadler $

PORTNAME=	felis
PORTVERSION=	1.0
CATEGORIES=	misc
MASTER_SITES=	http://www.whizkidtech.redprince.net/fports/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Displays one or more files as a single line of text

MAN1=		felis.1
PLIST_FILES=	bin/felis

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/felis ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/felis.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
