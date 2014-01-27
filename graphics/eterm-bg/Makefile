# Created by: Satoshi Taoka <taoka@FreeBSD.org>
# $FreeBSD: graphics/eterm-bg/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	eterm-bg
PORTVERSION=	0.9.6
CATEGORIES=	graphics
MASTER_SITES=	http://www.eterm.org/download/
DISTNAME=	Eterm-bg-${PORTVERSION}

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	Image files for background of Eterm

NO_WRKSUBDIR=	yes
NO_BUILD=	yes

NO_STAGE=	yes
do-install:
	${MKDIR} ${PREFIX}/share/Eterm
	${MKDIR} ${PREFIX}/share/Eterm/pix
	${MKDIR} ${PREFIX}/share/Eterm/pix/scale
	${MKDIR} ${PREFIX}/share/Eterm/pix/tile
	${INSTALL_DATA} ${WRKSRC}/bg/scale/*  ${PREFIX}/share/Eterm/pix/scale
	${INSTALL_DATA} ${WRKSRC}/bg/tile/*  ${PREFIX}/share/Eterm/pix/tile

.include <bsd.port.mk>
