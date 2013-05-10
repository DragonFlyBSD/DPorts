# New ports collection makefile for:	fcitx-chewing
# Date created:				6 Feb 2012
# Whom:			Zhihao Yuan <lichray@gmail.com>
#
# $FreeBSD: chinese/fcitx-chewing/Makefile 316407 2013-04-24 07:35:40Z ak $
#

PORTNAME=	fcitx-chewing
PORTVERSION=	0.1.3
CATEGORIES=	chinese
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	Chewing support for Fcitx

LIB_DEPENDS=	fcitx-config:${PORTSDIR}/chinese/fcitx \
		chewing:${PORTSDIR}/chinese/libchewing

USE_XZ=		yes
USES=		cmake gettext
USE_GNOME=	intltool

PROJECTHOST=	fcitx

.include <bsd.port.mk>
