# New ports collection makefile for:	googlemock
# Date created:			        Dec 12, 2008
# Whom:				        Cheng-Lung Sung <clsung@FreeBSD.org>
#
# $FreeBSD: ports/devel/googlemock/Makefile,v 1.5 2012/11/17 05:55:46 svnexp Exp $
#

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

.include <bsd.port.mk>
