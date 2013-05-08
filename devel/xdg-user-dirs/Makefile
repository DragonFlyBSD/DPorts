# New ports collection makefile for:	xdg-user-dirs
# Date created:		2008-07-01
# Whom:			Max Brazhnikov <makc@issp.ac.ru>
#
# $FreeBSD: devel/xdg-user-dirs/Makefile 316654 2013-04-27 08:50:46Z mva $
#

PORTNAME=	xdg-user-dirs
PORTVERSION=	0.14
CATEGORIES=	devel
MASTER_SITES=	http://user-dirs.freedesktop.org/releases/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Tool to help manage personal user directories

GNU_CONFIGURE=	yes
USES=		gettext iconv
USE_GMAKE=	yes
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
