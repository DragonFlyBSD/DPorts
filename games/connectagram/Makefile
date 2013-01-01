# New Ports collection makefile for:	connectagram
# Date created:		23 April 2012
# Whom:			nemysis@gmx.ch
#
# $FreeBSD: ports/games/connectagram/Makefile,v 1.4 2012/11/17 05:57:34 svnexp Exp $
#

PORTNAME=	connectagram
PORTVERSION=	1.0.1
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	http://gottcode.org/${PORTNAME}/
EXTRACT_SUFX=	-src.tar.bz2

MAINTAINER=	nemysis@gmx.ch
COMMENT=	Word unscrambling game

LICENSE=	GPLv3

USE_BZIP2=	yes
USE_QT4=	moc_build qmake_build rcc_build gui network
INSTALLS_ICONS=	yes
MAKE_JOBS_SAFE=	yes

PORTDOCS=	ChangeLog

.include <bsd.port.options.mk>

do-configure:
	@cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} \
		${QMAKE} ${QMAKEFLAGS} PREFIX=${PREFIX}

post-install:
# Pixmaps
	${LN} -sf ${PREFIX}/share/icons/hicolor/48x48/apps/${PORTNAME}.png ${PREFIX}/share/pixmaps/

# Documentation
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
.endif

.include <bsd.port.mk>
