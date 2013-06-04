# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: databases/R-cran-RSQLite/Makefile 319316 2013-05-28 15:15:05Z bf $

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

.include <bsd.port.mk>
