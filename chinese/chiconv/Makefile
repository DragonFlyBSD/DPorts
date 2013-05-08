# Created by: buganini@gmail.com
# $FreeBSD: chinese/chiconv/Makefile 317060 2013-05-01 23:14:22Z bdrewery $

PORTNAME=	chiconv
PORTVERSION=	10.0
CATEGORIES=	chinese converters
DISTNAME=	${GH_ACCOUNT}-${GH_PROJECT}-${PORTVERSION}-0-g${GH_COMMIT}

MAINTAINER=	buganini@gmail.com
COMMENT=	Auto chinese encoding converter

LICENSE=	BSD

LIB_DEPENDS=	bsdconv:${PORTSDIR}/converters/bsdconv

USE_GITHUB=	yes
GH_ACCOUNT=	buganini
GH_COMMIT=	6f4a7bf

MAKE_ARGS=	PREFIX=${PREFIX}

PLIST_FILES=	bin/chiconv

.include <bsd.port.mk>
