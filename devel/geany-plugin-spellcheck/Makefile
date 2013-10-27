# $FreeBSD: devel/geany-plugin-spellcheck/Makefile 331383 2013-10-23 13:08:41Z makc $

PORTNAME=	geany-plugin-spellcheck
PORTVERSION=	${GEANY_VER}
CATEGORIES=	devel

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Geany plugin: ${${GEANY_PLUGIN}_DESC}

LIB_DEPENDS=	libenchant.so:${PORTSDIR}/textproc/enchant

.include "${.CURDIR}/../geany-plugins/files/Makefile.common"
.include <bsd.port.mk>
