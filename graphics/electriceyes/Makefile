# New ports collection makefile for:	electriceyes
# Date created:				21 August 1998
# Whom:					Yukihiro Nakai <Nakai@technologist.com>
#
# $FreeBSD: ports/graphics/electriceyes/Makefile,v 1.49 2012/11/17 05:58:04 svnexp Exp $
#

PORTNAME=	electriceyes
PORTVERSION=	0.3.12
PORTREVISION=	11
CATEGORIES=	graphics gnome
MASTER_SITES=	GNOME
MASTER_SITE_SUBDIR=	sources/ee/0.3
DISTNAME=	ee-${PORTVERSION}

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	A graphic view base imlib & gtk

USE_GMAKE=	yes
USE_GNOME=	gnomeprefix gnomehack gnomelibs
USE_GETTEXT=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include

post-install:
	${MV} ${PREFIX}/bin/ee ${PREFIX}/bin/ElectricEyes

.include <bsd.port.mk>
