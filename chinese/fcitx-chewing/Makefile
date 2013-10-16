# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: chinese/fcitx-chewing/Makefile 327713 2013-09-20 16:01:22Z bapt $

PORTNAME=	fcitx-chewing
PORTVERSION=	0.1.3
PORTREVISION=	1
CATEGORIES=	chinese
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PROJECTHOST=	fcitx
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	Chewing support for Fcitx

LIB_DEPENDS=	fcitx-config:${PORTSDIR}/chinese/fcitx \
		chewing:${PORTSDIR}/chinese/libchewing

USE_XZ=		yes
USES=		cmake gettext pkgconfig
USE_GNOME=	intltool

NO_STAGE=	yes
.include <bsd.port.mk>
