# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: textproc/fcitx-m17n/Makefile 314960 2013-03-22 20:06:14Z makc $

PORTNAME=	fcitx-m17n
PORTVERSION=	0.1.4
CATEGORIES=	textproc
MASTER_SITES=	GOOGLE_CODE
PROJECTHOST=	fcitx
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	Multilingualization support for Fcitx

LIB_DEPENDS=	fcitx-config:${PORTSDIR}/chinese/fcitx \
		m17n:${PORTSDIR}/devel/m17n-lib

USE_XZ=		yes
USE_GETTEXT=	yes
USES=		cmake
USE_GNOME=	intltool

.include <bsd.port.mk>
