# Created by: Shen Chuan-Hsing <statue@freebsd.sinica.edu.tw>
# $FreeBSD: chinese/ttf2pt1/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	ttf2pt1
PORTVERSION=	3.4.0
CATEGORIES=	chinese print
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-chinese/${PORTVERSION}
DISTNAME=	${PORTNAME}-chinese-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	True Type Font to Postscript Type 1 converter with Chinese maps

RUN_DEPENDS=	ttf2pt1:${PORTSDIR}/print/ttf2pt1

MAKE_ARGS=	INSTDIR="${PREFIX}"

NO_BUILD=	yes

.include <bsd.port.mk>
