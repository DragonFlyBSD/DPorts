# New ports collection makefile for:	fcitx-anthy
# Date created:				18 Jul 2012
# Whom:			Zhihao Yuan <lichray@gmail.com>
#
# $FreeBSD: japanese/fcitx-anthy/Makefile 316407 2013-04-24 07:35:40Z ak $
#

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
USES=		cmake gettext
USE_GNOME=	intltool

PROJECTHOST=	fcitx

.include <bsd.port.mk>
