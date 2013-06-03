# New ports collection makefile for:	columns
# Date created:				26 August 1999
# Whom:					Andrey Zakhvatov
#
# $FreeBSD: ports/games/columns/Makefile,v 1.25 2012/11/17 05:57:34 svnexp Exp $
#

PORTNAME=	columns
PORTVERSION=	1.2b
PORTREVISION=	6
CATEGORIES=	games
# mastersite disappeared in December 2000
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	thierry
DISTNAME=	Columns-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Nice little implementation of columns game for X Window System

USE_SDL=	sdl
GNU_CONFIGURE=	yes

DATADIR=	${PREFIX}/share/Columns
PORTDOCS=	README

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
