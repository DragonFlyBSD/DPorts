# New ports collection makefile for:	mixmos
# Date created:		24 Jul 2004
# Whom:			Herbert J. Skuhra <h.skuhra@gmail.com>
#
# $FreeBSD: ports/audio/mixmos/Makefile,v 1.15 2012/11/17 05:54:38 svnexp Exp $
#

PORTNAME=	mixmos
PORTVERSION=	0.2.0
PORTREVISION=	9
CATEGORIES=	audio
MASTER_SITES=	${MASTER_SITE_TUCOWS}

MAINTAINER=	h.skuhra@gmail.com
COMMENT=	A GTK2 audio mixer

USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN1=		mixmos.1

.include <bsd.port.mk>
