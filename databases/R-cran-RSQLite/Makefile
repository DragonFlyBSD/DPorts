# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: databases/R-cran-RSQLite/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	RSQLite
PORTVERSION=	0.11.2
PORTREVISION=	3
CATEGORIES=	databases
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Database Interface R driver for SQLite

LICENSE=	LGPL20

BUILD_DEPENDS=	R-cran-DBI>=0.2.5:${PORTSDIR}/databases/R-cran-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
