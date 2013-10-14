# Created by: Frank Steinborn <steinex@nognu.de>
# $FreeBSD: devel/libgee06/Makefile 329443 2013-10-05 11:40:08Z kwm $
#    $MCom: ports/devel/libgee/Makefile,v 1.13 2012/10/14 20:47:22 kwm Exp $

PORTNAME=	libgee
PORTVERSION=	0.6.8
CATEGORIES=	devel
MASTER_SITES=	GNOME
PKGNAMESUFFIX=	06

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	GObject collection library

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-introspection=yes
USE_XZ=		yes
USE_GNOME=	glib20 gnomehier introspection:build
USES=		gmake pathfix pkgconfig
USE_LDCONFIG=	yes

.include <bsd.port.mk>
