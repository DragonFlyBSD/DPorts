# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: chinese/fcitx-rime/Makefile 339153 2014-01-08 16:12:38Z vanilla $

PORTNAME=	fcitx-rime
PORTVERSION=	0.1.2
PORTREVISION=	1
CATEGORIES=	chinese
MASTER_SITES=	GOOGLE_CODE
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	RIME support for Fcitx

LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx \
		librime.so:${PORTSDIR}/chinese/librime

USE_LDCONFIG=	${PREFIX}/lib/fcitx/
USE_XZ=		yes
USES=		cmake gettext
USE_GNOME=	intltool
INSTALLS_ICONS=	yes

PROJECTHOST=	fcitx

.include <bsd.port.mk>
