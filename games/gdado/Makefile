# New ports collection makefile for:	gdado
# Date created:				06 May 2007
# Whom:					Anish Mistry <amistry@am-productions.biz>
#
# $FreeBSD: ports/games/gdado/Makefile,v 1.10 2012/11/17 05:57:39 svnexp Exp $
#

PORTNAME=	gdado
PORTVERSION=	2.2
PORTREVISION=	6
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/souce%20code/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GTK2 dice roller

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomeprefix gtk20 libgnomeui

post-patch:
	@${REINPLACE_CMD} "s|-O2|${CFLAGS}|" ${WRKSRC}/configure

.include <bsd.port.mk>
