# $FreeBSD: graphics/rubygem-gdk_pixbuf2/Makefile 332044 2013-10-30 02:48:42Z swills $

PORTNAME=	gdk_pixbuf2
PORTVERSION=	2.0.2
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for GdkPixbuf2

RUN_DEPENDS=	rubygem-glib2>=${PORTVERSION}:${PORTSDIR}/devel/rubygem-glib2

USE_GNOME=	gdkpixbuf2
USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
