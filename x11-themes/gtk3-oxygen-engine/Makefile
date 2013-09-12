# Created by: Max Brazhnikov <makc@FreeBSD.org>
# $FreeBSD: x11-themes/gtk3-oxygen-engine/Makefile 325921 2013-09-01 22:07:00Z rakuco $

PORTNAME=	oxygen
PORTVERSION=	1.2.0
CATEGORIES=	x11-themes
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	stable/${PORTNAME}-gtk3/${PORTVERSION}/src/
PKGNAMEPREFIX=	gtk3-
PKGNAMESUFFIX=	-engine
DISTNAME=	${PORTNAME}-gtk3-${PORTVERSION}

MAINTAINER=	rakuco@FreeBSD.org
COMMENT=	Oxygen GTK+ 3 engine and theme

LICENSE=	LGPL21

LIB_DEPENDS=	cairo:${PORTSDIR}/graphics/cairo \
		dbus-glib-1:${PORTSDIR}/devel/dbus-glib

USE_BZIP2=	yes
USE_GNOME=	gtk30
USES=		cmake:outsource pkgconfig

.include <bsd.port.mk>
