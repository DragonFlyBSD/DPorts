# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: devel/googlemock/Makefile 327723 2013-09-20 17:04:43Z bapt $

PORTNAME=	googlemock
PORTVERSION=	1.5.0
CATEGORIES=	devel
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	gmock-${PORTVERSION}

MAINTAINER=	clsung@FreeBSD.org
COMMENT=	A library for writing and using C++ mock classes

BUILD_DEPENDS=	googletest>=1.5.0:${PORTSDIR}/devel/googletest

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USE_GCC=	4.2+

NO_STAGE=	yes
.include <bsd.port.mk>
