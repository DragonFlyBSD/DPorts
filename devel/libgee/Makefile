# New ports collection makefile for:	libgee
# Date created:				2010-03-14
# Whom:					Frank Steinborn <steinex@nognu.de>
#
# $FreeBSD: ports/devel/libgee/Makefile,v 1.9 2012/11/17 05:55:54 svnexp Exp $
#

PORTNAME=	libgee
PORTVERSION=	0.6.2.1
CATEGORIES=	devel
MASTER_SITES=	GNOME

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	GObject collection library

BUILD_DEPENDS=	gobject-introspection>=0.9.0:${PORTSDIR}/devel/gobject-introspection

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-introspection=yes
USE_GMAKE=	yes
USE_XZ=		yes
USE_GNOME=	glib20 gnomehack
USE_LDCONFIG=	yes

.include <bsd.port.mk>
