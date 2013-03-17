# Created by: nemysis@gmx.ch
# $FreeBSD: ports/games/asteroid/Makefile,v 1.2 2013/02/19 17:43:27 svnexp Exp $

PORTNAME=	asteroid
PORTVERSION=	1.2.1
CATEGORIES=	games

MAINTAINER=	nemysis@gmx.ch
COMMENT=	Modern version of the arcade classic Asteroid

LICENSE=	GPLv3

USE_GITHUB=	yes
GH_ACCOUNT=	chazomaticus
GH_PROJECT=	asteroid
GH_TAGNAME=	master
GH_COMMIT=	6d23595

USE_GL=		glut
USE_SDL=	mixer sdl
USE_GNOME=	gtk20
USE_XORG=	xmu
INSTALLS_ICONS=	yes
USE_CMAKE=	yes
CMAKE_VERBOSE=	yes

PORTDOCS=	AUTHORS NEWS README.md

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
.endif
	@-update-desktop-database -q

.include <bsd.port.mk>
