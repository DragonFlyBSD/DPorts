# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: chinese/fcitx-cloudpinyin/Makefile 339153 2014-01-08 16:12:38Z vanilla $

PORTNAME=	fcitx-cloudpinyin
PORTVERSION=	0.3.0
PORTREVISION=	1
CATEGORIES=	chinese
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	A cloud-based Pinyin module for Fcitx

LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx \
		libcurl.so:${PORTSDIR}/ftp/curl

USE_XZ=		yes
USES=		cmake gettext pkgconfig
USE_GNOME=	intltool

PROJECTHOST=	fcitx

.include <bsd.port.mk>
