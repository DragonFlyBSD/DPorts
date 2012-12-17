# New ports collection makefile for: wmeyes
# Date created:        18 March 1999
# Whom:                Zenin <zenin@archive.rhps.org>
#
# $FreeBSD: ports/games/wmeyes/Makefile,v 1.15 2012/11/17 05:57:56 svnexp Exp $
#

PORTNAME=	wmeyes
PORTVERSION=	1.2
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	http://www.bstern.org/wmeyes/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The world's most useless WindowMaker dock app

USE_IMAKE=	yes
USE_XORG=	xpm xmu
NO_INSTALL_MANPAGES=	yes

PORTDOCS=	README
PLIST_FILES=	bin/wmeyes

post-patch:
	@${REINPLACE_CMD} -e 's|Target(|TargetNoMan(|g' ${WRKSRC}/Imakefile

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for file in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
