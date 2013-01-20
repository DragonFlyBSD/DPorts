# Created by: Ceri Davies (ceri@FreeBSD.org)
# $FreeBSD: ports/games/robotfindskitten/Makefile,v 1.10 2013/01/13 02:45:01 svnexp Exp $

PORTNAME=	robotfindskitten
PORTVERSION=	2.7182818.701
PORTEPOCH=	1
CATEGORIES=	games
MASTER_SITES=	http://robotfindskitten.org/download/POSIX/

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Yet another zen simulation

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	YES

MAN6=		robotfindskitten.6

post-patch:
	@${REINPLACE_CMD} -e 's,/usr/share/games/robotfindskitten,${DATADIR},' \
		${WRKSRC}/doc/robotfindskitten.6

do-install:
	${MKDIR} ${DATADIR}
	${INSTALL_PROGRAM} ${WRKSRC}/src/robotfindskitten ${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/nki/vanilla.nki ${DATADIR}
	${INSTALL_MAN} ${WRKSRC}/doc/robotfindskitten.6 ${MANPREFIX}/man/man6

.include <bsd.port.mk>
