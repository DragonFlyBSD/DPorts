# New ports collection makefile for:	xoris
# Date created:				02 April 2006
# Whom:					Alexander Gromnitsky
#
# $FreeBSD: ports/graphics/xoris/Makefile,v 1.5 2012/11/17 05:58:26 svnexp Exp $
#

PORTNAME=	xoris
PORTVERSION=	0.1e
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	alexander.gromnitsky@gmail.com
COMMENT=	An X11 pixel color grabber

USE_IMAKE=	yes
USE_XORG=	x11

.if !defined(NOPORTDOCS)
SUB_FILES=	pkg-message
.endif

post-install:
	@ ${INSTALL_SCRIPT} ${FILESDIR}/xoris-run.sh ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	@ ${ECHO_MSG} "===>   Installing documentation for ${PORTNAME}"
	@ ${MKDIR} ${DOCSDIR}
	@ ${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}/
	@ ${CAT} ${PKGMESSAGE}
.endif

.include <bsd.port.mk>
