# $FreeBSD: x11-toolkits/rubygem-gdk3/Makefile 320382 2013-06-09 18:47:04Z swills $

PORTNAME=	gdk3
PORTVERSION=	2.0.2
CATEGORIES=	x11-toolkits rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby/GDK3 is a Ruby binding of GDK-3.x

RUN_DEPENDS=	rubygem-gdk_pixbuf2>=${PORTVERSION}:${PORTSDIR}/graphics/rubygem-gdk_pixbuf2 \
		rubygem-pango>=${PORTVERSION}:${PORTSDIR}/x11-toolkits/rubygem-pango

USE_GNOME=	gtk30
USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
