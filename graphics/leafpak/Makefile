# New ports collection makefile for:	leafpak
# Date created:		25 Sep 2000
# Whom:			TAKAHASHI Kaoru <kaoru@kaisei.org>
#
# $FreeBSD: ports/graphics/leafpak/Makefile,v 1.4 2012/11/17 05:58:11 svnexp Exp $
#

PORTNAME=	leafpak
PORTVERSION=	1.1.1
CATEGORIES=	graphics
MASTER_SITES=	http://hoshina.denpa.org/

MAINTAINER=	kaoru@kaisei.org
COMMENT=	Graphic file cutter for LEAF/AQUAPLUS PAK format archives

WRKSRC=		${WRKDIR}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/leafpak ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/leafpak2 ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	${MKDIR} ${PREFIX}/share/doc/ja/leafpak
	${INSTALL_DATA} ${WRKSRC}/README ${PREFIX}/share/doc/ja/leafpak
.endif

.include <bsd.port.mk>
