# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: japanese/fcitx-anthy/Makefile 327737 2013-09-20 18:47:54Z bapt $

PORTNAME=	fcitx-anthy
PORTVERSION=	0.1.1
CATEGORIES=	japanese
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	Anthy support for Fcitx

LIB_DEPENDS=	fcitx-config:${PORTSDIR}/chinese/fcitx \
		anthy:${PORTSDIR}/japanese/anthy

USE_XZ=		yes
USES=		cmake gettext pkgconfig
USE_GNOME=	intltool

PROJECTHOST=	fcitx

NO_STAGE=	yes
.include <bsd.port.mk>
