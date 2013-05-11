# New ports collection makefile for:	parano
# Date created:		3 May 2006
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: security/parano/Makefile 316464 2013-04-24 18:10:30Z ak $
#

PORTNAME=	parano
PORTVERSION=	0.3.5
PORTREVISION=	4
CATEGORIES=	security
MASTER_SITES=	BERLIOS

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A Gnome program to deal with hashfiles

USE_GNOME=	pygnome2
USE_PYTHON=	yes
USES=		gettext
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
