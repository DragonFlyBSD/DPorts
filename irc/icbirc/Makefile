# Created by: hrs
# $FreeBSD: irc/icbirc/Makefile 327736 2013-09-20 18:44:49Z bapt $

PORTNAME=	icbirc
PORTVERSION=	1.8
CATEGORIES=	irc
MASTER_SITES=	http://www.benzedrine.cx/

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Proxy IRC client and ICB server

MAKE_ENV=	BINDIR="${PREFIX}/bin" MANDIR="${PREFIX}/man/man"
WRKSRC=		${WRKDIR}/${PORTNAME}

MAN8=		icbirc.8
MANCOMPRESSED=	maybe

PLIST_FILES=	bin/icbirc

NO_STAGE=	yes
.include <bsd.port.mk>
