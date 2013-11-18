# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: databases/R-cran-RMySQL/Makefile 333659 2013-11-13 08:19:34Z bf $

PORTNAME=	RMySQL
DISTVERSION=	0.9-3
PORTREVISION=	8
CATEGORIES=	databases
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	R interface to the MySQL database

LICENSE=	GPLv2

RUN_DEPENDS=	R-cran-DBI>=0.2.2:${PORTSDIR}/databases/R-cran-DBI

USE_MYSQL=	yes
USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
