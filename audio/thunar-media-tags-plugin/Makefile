# Created by: Martin Wilke (miwi@FreeBSD.org)
# $FreeBSD: audio/thunar-media-tags-plugin/Makefile 316407 2013-04-24 07:35:40Z ak $

PORTNAME=	thunar-media-tags-plugin
PORTVERSION=	0.2.0
PORTREVISION=	4
CATEGORIES=	audio xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=src/thunar-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	A Media Tags Plugin

LIB_DEPENDS=	tag:${PORTSDIR}/audio/taglib

USES=		pkgconfig gettext
USE_BZIP2=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
USE_GNOME=	gnomehack gtk20 intltool intlhack
USE_XFCE=	configenv libexo thunar
USE_AUTOTOOLS=	libtool

.include <bsd.port.mk>
