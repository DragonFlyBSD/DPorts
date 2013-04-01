# Created by: George Reid <greid@ukug.uk.freebsd.org>
# $FreeBSD: audio/tempest_for_eliza/Makefile 314041 2013-03-13 09:06:35Z danfe $

PORTNAME=	tempest_for_eliza
PORTVERSION=	1.0.5
PORTREVISION=	6
CATEGORIES=	audio
MASTER_SITES=	http://www.erikyyy.de/tempest/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Program to send AM radio signals using a PC monitor

USE_GMAKE=	yes
GNU_CONFIGURE=	yes
USE_SDL=	sdl

SONGS=		forelise jonny fruehling saints oldmacdonald ungarian \
		godfather starwars tempest
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

post-install:
	@${MKDIR} ${PREFIX}/share/tempest
	${INSTALL_DATA} ${SONGS:S,^,${WRKSRC}/songs/,} ${PREFIX}/share/tempest
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
