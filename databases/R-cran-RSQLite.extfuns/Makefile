# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: databases/R-cran-RSQLite.extfuns/Makefile 338168 2013-12-30 20:55:18Z ohauer $

PORTNAME=	RSQLite.extfuns
PORTVERSION=	0.0.1
PORTREVISION=	5
CATEGORIES=	databases
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	SQLite extension functions for RSQLite

LICENSE=	APACHE20

BUILD_DEPENDS=	R-cran-RSQLite>=0.11.1:${PORTSDIR}/databases/R-cran-RSQLite
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=	cran:auto-plist

.include <bsd.port.mk>
