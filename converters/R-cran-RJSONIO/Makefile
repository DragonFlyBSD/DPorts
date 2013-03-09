# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: ports/converters/R-cran-RJSONIO/Makefile,v 1.16 2013/01/04 18:45:32 svnexp Exp $

PORTNAME=	RJSONIO
DISTVERSION=	1.0-1
PORTREVISION=	1
CATEGORIES=	converters
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Serialize R objects to JSON, JavaScript Object Notation

LICENSE=	BSD

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

post-patch:
	${REINPLACE_CMD} "s/std::snprintf/snprintf/" ${WRKSRC}/src/libjson/Source/NumberToString.h

.include <bsd.port.mk>
