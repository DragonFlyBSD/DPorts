# Created by: Alexander Y. Grigoryev <alexander.4mail@gmail.com>
# $FreeBSD: graphics/zathura-djvu/Makefile 335121 2013-11-28 21:08:38Z madpilot $

PORTNAME=	zathura-djvu
PORTVERSION=	0.2.3
CATEGORIES=	graphics
MASTER_SITES=	http://pwmt.org/projects/zathura/plugins/download/

MAINTAINER=	alexander.4mail@gmail.com
COMMENT=	The zathura-djvu plugin adds DjVu support to zathura

LIB_DEPENDS=	libdjvulibre.so:${PORTSDIR}/graphics/djvulibre
BUILD_DEPENDS=	zathura:${PORTSDIR}/graphics/zathura
RUN_DEPENDS=	zathura:${PORTSDIR}/graphics/zathura

USE_GNOME=	glib20 gtk30
USES=		desktop-file-utils gmake pkgconfig

PLIST_FILES=	lib/zathura/djvu.so \
		share/applications/zathura-djvu.desktop
PLIST_DIRSTRY=	lib/zathura

.include <bsd.port.mk>
