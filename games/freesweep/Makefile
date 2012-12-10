# New ports collection makefile for:	freesweep
# Date created:				25 July 1999
# Whom:					Andrey Zakhvatov
#
# $FreeBSD: ports/games/freesweep/Makefile,v 1.18 2012/11/17 05:57:39 svnexp Exp $
#

PORTNAME=	freesweep
PORTVERSION=	0.92
CATEGORIES=	games
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Minesweeper-style game for text-mode terminals

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-prefsdir=${DATADIR} \
		--with-scoresdir=${DATADIR} \
		--disable-debug-log
ALL_TARGET=	${PORTNAME}
MAKE_JOBS_SAFE=	yes

MAN6=		freesweep.6
PORTDOCS=	CHANGES README
PLIST_FILES=	bin/freesweep %%DATADIR%%/sweeprc %%DATADIR%%/sweeptimes
PLIST_DIRS=	%%DATADIR%%

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for file in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
