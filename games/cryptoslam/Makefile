# Created by: ijliao
# $FreeBSD: games/cryptoslam/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	cryptoslam
PORTVERSION=	1.2
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A curses-based tool for creating and solving the cryptograms

PLIST_FILES=	bin/cryptoslam

NO_STAGE=	yes
do-build:
	cd ${WRKSRC} && ${CXX} ${CXXFLAGS} cryptogram.cpp cryptoslam.cpp \
		-o ${PORTNAME} -lcurses

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
