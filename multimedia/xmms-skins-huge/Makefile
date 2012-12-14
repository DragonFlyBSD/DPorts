# New ports collection makefile for:	xmms-skins-huge
# Date created:				2011-06-18
# Whom:					Jesse <jessefrgsmith@yahoo.ca>
#
# $FreeBSD: ports/multimedia/xmms-skins-huge/Makefile,v 1.2 2012/11/17 05:59:55 svnexp Exp $
#

PORTNAME=	xmms-skins-huge
PORTVERSION=	1.0.0
CATEGORIES=	multimedia
MASTER_SITES=	http://webs.ono.com/supercarlos/
DISTNAME=	${PORTNAME}-src-${PORTVERSION}

MAINTAINER=	jessefrgsmith@yahoo.ca
COMMENT=	Skins for X Multimedia System (XMMS)

CONFLICTS_INSTALL=	xmms-skins-[0-9]*

NO_BUILD=	yes
WRKSRC=		${WRKDIR}/Skins
DATADIR=	${PREFIX}/share/xmms

do-install:
	${MKDIR} ${DATADIR}/Skins
	${INSTALL_DATA} ${WRKSRC}/* ${DATADIR}/Skins

.include <bsd.port.mk>
