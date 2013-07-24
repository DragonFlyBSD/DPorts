# New ports collection makefile for:	zint
# Date created:		2010-03-13
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD: graphics/zint/Makefile 323455 2013-07-22 14:34:22Z vg $
#

PORTNAME=	zint
PORTVERSION=	2.4.3
PORTREVISION=	2
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}/

MAINTAINER=	vg@FreeBSD.org
COMMENT=	Zint Barcode Generator

LICENSE=	GPLv3

LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png

USES=		cmake
USE_LDCONFIG=	yes
USE_QT4=	gui xml qmake_build uic_build moc_build rcc_build designer
MAKE_JOBS_SAFE=	yes

DESKTOP_ENTRIES="Zint" "Barcode generator" "" "zint-qt" "" false

.include <bsd.port.mk>
