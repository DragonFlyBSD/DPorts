# New ports collection makefile for:	sdlCC
# Date created:		21 November 2007
# Whom:			Frank W. Josellis <frank@dynamical-systems.org>
#
# $FreeBSD: ports/games/sdlCC/Makefile,v 1.13 2012/11/17 05:57:52 svnexp Exp $
#

PORTNAME=	sdlCC
PORTVERSION=	0.0.0
PORTREVISION=	7
CATEGORIES=	games
MASTER_SITES=	http://chinesecheckers.vegard2.no/ \
		http://jcatki.no-ip.org/files/

MAINTAINER=	frank@dynamical-systems.org
COMMENT=	Extensible Chinese checkers game using SDL

USE_AUTOTOOLS=	libtool
USE_SDL=	image mixer sdl
GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|echo aout|echo elf|' ${WRKSRC}/configure ${WRKSRC}/libltdl/configure

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/README ${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/players/README ${DOCSDIR}/README.players
.endif

.include <bsd.port.mk>
