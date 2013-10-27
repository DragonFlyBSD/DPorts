# $FreeBSD: devel/geany-plugin-multiterm/Makefile 331383 2013-10-23 13:08:41Z makc $

PORTNAME=	geany-plugin-multiterm
PORTVERSION=	${GEANY_VER}
CATEGORIES=	devel

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Geany plugin: ${${GEANY_PLUGIN}_DESC}

BUILD_DEPENDS=	valac:${PORTSDIR}/lang/vala
USE_GNOME=	vte

.include "${.CURDIR}/../geany-plugins/files/Makefile.common"
.include <bsd.port.mk>
