# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: databases/R-cran-RMySQL/Makefile 319316 2013-05-28 15:15:05Z bf $

PORTNAME=	RMySQL
DISTVERSION=	0.9-3
PORTREVISION=	6
CATEGORIES=	databases
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	R interface to the MySQL database

LICENSE=	GPLv2

RUN_DEPENDS=	R-cran-DBI>=0.2.2:${PORTSDIR}/databases/R-cran-DBI

USE_MYSQL=	yes
USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
