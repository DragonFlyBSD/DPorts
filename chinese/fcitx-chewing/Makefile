# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: chinese/fcitx-chewing/Makefile 339153 2014-01-08 16:12:38Z vanilla $

PORTNAME=	fcitx-chewing
PORTVERSION=	0.1.3
PORTREVISION=	1
CATEGORIES=	chinese
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PROJECTHOST=	fcitx
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	Chewing support for Fcitx

LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx \
		libchewing.so:${PORTSDIR}/chinese/libchewing

USE_XZ=		yes
USES=		cmake gettext pkgconfig
USE_GNOME=	intltool

.include <bsd.port.mk>
