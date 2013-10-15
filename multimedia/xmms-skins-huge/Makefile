# Created by: Jesse <jessefrgsmith@yahoo.ca>
# $FreeBSD: multimedia/xmms-skins-huge/Makefile 327747 2013-09-20 20:57:48Z bapt $

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

NO_STAGE=	yes
do-install:
	${MKDIR} ${DATADIR}/Skins
	${INSTALL_DATA} ${WRKSRC}/* ${DATADIR}/Skins

.include <bsd.port.mk>
