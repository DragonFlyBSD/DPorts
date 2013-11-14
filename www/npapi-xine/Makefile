# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: www/npapi-xine/Makefile 327776 2013-09-20 23:36:50Z bapt $

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

USES=		pkgconfig npapi
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_NPAPI=	native
NPAPI_ID=	${PORTNAME}
NPAPI_WRKSRC=	${WRKSRC}/src/.libs
NPAPI_FILES=	xineplugin.so

NO_STAGE=	yes
.include <bsd.port.mk>
