# $FreeBSD: devel/geany-plugin-multiterm/Makefile 327723 2013-09-20 17:04:43Z bapt $

PORTNAME=	geany-plugin-multiterm
PORTVERSION=	${GEANY_VER}
CATEGORIES=	devel

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Geany plugin: ${${GEANY_PLUGIN}_DESC}

BUILD_DEPENDS=	valac:${PORTSDIR}/lang/vala
USE_GNOME=	vte

NO_STAGE=	yes
.include "${.CURDIR}/../geany-plugins/files/Makefile.common"
.include <bsd.port.mk>
