# New ports collection makefile for:	fcitx-cloudpinyin
# Date created:				11 Nov 2011
# Whom:			Zhihao Yuan <lichray@gmail.com>
#
# $FreeBSD: chinese/fcitx-cloudpinyin/Makefile 316407 2013-04-24 07:35:40Z ak $
#

PORTNAME=	fcitx-cloudpinyin
PORTVERSION=	0.3.0
CATEGORIES=	chinese
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	A cloud-based Pinyin module for Fcitx

LIB_DEPENDS=	fcitx-config:${PORTSDIR}/chinese/fcitx \
		curl:${PORTSDIR}/ftp/curl

USE_XZ=		yes
USES=		cmake gettext
USE_GNOME=	intltool

PROJECTHOST=	fcitx

.include <bsd.port.mk>
