# New ports collection makefile for:	tthsum
# Date created:				25 Sep 2005
# Whom:					Emanuel Haupt <ehaupt@critical.ch>
#
# $FreeBSD: ports/security/tthsum/Makefile,v 1.14 2012/11/17 06:01:22 svnexp Exp $
#

PORTNAME=	tthsum
PORTVERSION=	1.3.1
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	http://tthsum.devs.nu/pkg/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	A command-line utility for generating and checking TTH message digests

LICENSE=	GPLv3

CONFLICTS=	microdc2-[0-9]*

USE_GMAKE=	yes
MANCOMPRESSED=	yes

MAKE_JOBS_SAFE=	yes

MAN1=		tthsum.1
PLIST_FILES=	bin/tthsum

regression-test: build
	@cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${GMAKE} test runtest

.include <bsd.port.mk>
