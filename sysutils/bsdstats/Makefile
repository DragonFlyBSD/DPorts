# Created by: Marc G. Fournier <scrappy@FreeBSD.org>
# $FreeBSD: sysutils/bsdstats/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	bsdstats
PORTVERSION=	5.5
PORTREVISION=	3
CATEGORIES=	sysutils
DISTFILES=

MAINTAINER=	bsdstats@nanoman.ca
COMMENT=	Monthly script for reporting anonymous statistics about your machine

NO_BUILD=	yes
USE_RC_SUBR=	bsdstats
SUB_FILES=	300.statistics pkg-message

NO_STAGE=	yes
do-install:
	${MKDIR} ${PREFIX}/etc/periodic/monthly
	${INSTALL_SCRIPT} ${WRKDIR}/300.statistics ${PREFIX}/etc/periodic/monthly
post-install:
.if defined(BATCH) || defined(PACKAGE_BUILDING)
	@${CAT} ${PKGMESSAGE}
.else
	@PKG_PREFIX="${PREFIX}" ${SH} ${PKGINSTALL} ${PKGNAME} POST-INSTALL
.endif

.include <bsd.port.mk>
