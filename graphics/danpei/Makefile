# ports collection makefile for: 	danpei
# Date created:         		4 Fev 2005
# Whom:                 		Andrey V. Elsukov <bu7cher@yandex.ru>
#
# $FreeBSD: ports/graphics/danpei/Makefile,v 1.15 2012/11/17 05:58:02 svnexp Exp $
#

PORTNAME=	danpei
PORTVERSION=	2.9.7
PORTREVISION=	10
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	bu7cher@yandex.ru
COMMENT=	Image Viewer for X Window System with thumbnail preview feature

LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png

.if !defined(WITHOUT_IMAGEMAGICK)
RUN_DEPENDS+=	convert:${PORTSDIR}/graphics/ImageMagick
.endif

USE_GETTEXT=	yes
USE_GNOME=	gtk12 gdkpixbuf
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ARGS+=	--without-included-gettext

.include <bsd.port.mk>
