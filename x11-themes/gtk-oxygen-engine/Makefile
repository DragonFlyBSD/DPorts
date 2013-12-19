# $FreeBSD: x11-themes/gtk-oxygen-engine/Makefile 336573 2013-12-15 19:41:43Z rakuco $

PORTNAME=	oxygen
PORTVERSION=	1.4.1
CATEGORIES=	x11-themes
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	stable/${PORTNAME}-gtk2/${PORTVERSION}/src
PKGNAMEPREFIX=	gtk-
PKGNAMESUFFIX=	-engine
DISTNAME=	${PORTNAME}-gtk2-${PORTVERSION}

MAINTAINER=	rakuco@FreeBSD.org
COMMENT=	Oxygen-Gtk engine and theme

LICENSE=	LGPL21

LIB_DEPENDS=	libcairo.so:${PORTSDIR}/graphics/cairo \
		libdbus-glib-1.so:${PORTSDIR}/devel/dbus-glib

USE_BZIP2=	yes
USE_GNOME=	gtk20
USES=		cmake pkgconfig

.include <bsd.port.mk>
