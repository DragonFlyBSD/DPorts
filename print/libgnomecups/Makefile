# New ports collection makefile for:	libgnomecups
# Date created:				14 Jul 2003
# Whom:					Glenn Johnson <glennpj@charter.net>
#
# $FreeBSD: ports/print/libgnomecups/Makefile,v 1.33 2012/11/17 06:00:52 svnexp Exp $
#

PORTNAME=	libgnomecups
PORTVERSION=	0.2.3
PORTREVISION=	4
PORTEPOCH=	1
CATEGORIES=	print gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Support library for gnome cups administration

LIB_DEPENDS=	cups.2:${PORTSDIR}/print/cups-client

USE_BZIP2=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomehack intlhack ltverhack glib20
USE_GETTEXT=	yes
USE_LDCONFIG=	yes
USE_AUTOTOOLS=  libtool
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
