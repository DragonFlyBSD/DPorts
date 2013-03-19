# New ports collection makefile for:	xdg-user-dirs
# Date created:		2008-07-01
# Whom:			Max Brazhnikov <makc@issp.ac.ru>
#
# $FreeBSD: ports/devel/xdg-user-dirs/Makefile,v 1.9 2012/11/17 05:57:06 svnexp Exp $
#

PORTNAME=	xdg-user-dirs
PORTVERSION=	0.14
CATEGORIES=	devel
MASTER_SITES=	http://user-dirs.freedesktop.org/releases/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Tool to help manage personal user directories

GNU_CONFIGURE=	yes
USE_GETTEXT=	yes
USE_ICONV=	yes
USE_GMAKE=	yes
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
