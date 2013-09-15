# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: www/npapi-xine/Makefile 326991 2013-09-11 16:45:58Z marino $

PORTNAME=	xine
PORTVERSION=	1.0.2
PORTREVISION=	8
DISTVERSIONPREFIX=	plugin-
CATEGORIES=	www multimedia
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-plugin/${PORTVERSION}
PKGNAMEPREFIX=	npapi-

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Embed Xine player into browser

LIB_DEPENDS=	xine.2:${PORTSDIR}/multimedia/libxine

USES=		pkgconfig
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_NPAPI=	native
NPAPI_ID=	${PORTNAME}
NPAPI_WRKSRC=	${WRKSRC}/src/.libs
NPAPI_FILES=	xineplugin.so

.include "${.CURDIR}/../../Mk/bsd.npapi.mk"
.include <bsd.port.mk>
