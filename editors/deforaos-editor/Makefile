# Created by: Olivier Cochard-Labbe <olivier@cochard.me>
# $FreeBSD: editors/deforaos-editor/Makefile 316407 2013-04-24 07:35:40Z ak $

PORTNAME=	editor
PORTVERSION=	0.2.1
CATEGORIES=	editors
MASTER_SITES=	http://www.defora.org/os/download/download/3702/
PKGNAMEPREFIX=	deforaos-
DISTNAME=	Editor-${PORTVERSION}

MAINTAINER=	olivier@cochard.me
COMMENT=	DeforaOS desktop text editor

LICENSE=	GPLv3

LIB_DEPENDS=	System:${PORTSDIR}/devel/deforaos-libsystem \
		Desktop:${PORTSDIR}/x11/deforaos-libdesktop

MAKE_ARGS=	PREFIX=${PREFIX}
USES=		pkgconfig gettext
USE_GNOME=	gtk20 desktopfileutils

.include <bsd.port.mk>
