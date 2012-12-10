# Created by: buganini@gmail.com
# $FreeBSD: ports/chinese/chiconv/Makefile,v 1.2 2012/11/17 05:54:56 svnexp Exp $

PORTNAME=	chiconv
PORTVERSION=	1.0
CATEGORIES=	chinese converters
DISTNAME=	${GH_ACCOUNT}-${GH_PROJECT}-${PORTVERSION}-0-g${GH_COMMIT}

MAINTAINER=	buganini@gmail.com
COMMENT=	Auto chinese encoding converter

LICENSE=	BSD

LIB_DEPENDS=	bsdconv:${PORTSDIR}/converters/bsdconv

USE_GITHUB=	yes
GH_ACCOUNT=	buganini
GH_COMMIT=	046010f

MAKE_ARGS=	PREFIX=${PREFIX}

PLIST_FILES=	bin/chiconv

.include <bsd.port.mk>
