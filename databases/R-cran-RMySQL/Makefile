# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: databases/R-cran-RMySQL/Makefile 337846 2013-12-28 10:28:40Z dbn $

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
USES=	cran:auto-plist

.include <bsd.port.mk>
