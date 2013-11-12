# Created by: ijliao
# $FreeBSD: games/cryptoslam/Makefile 332288 2013-10-31 21:31:42Z danilo $

PORTNAME=	cryptoslam
PORTVERSION=	1.2
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Curses-based tool for creating and solving the cryptograms

PLIST_FILES=	bin/cryptoslam

do-build:
	cd ${WRKSRC} && ${CXX} ${CXXFLAGS} cryptogram.cpp cryptoslam.cpp \
		-o ${PORTNAME} -lcurses

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
