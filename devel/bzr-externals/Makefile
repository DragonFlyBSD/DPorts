# New ports collection makefile for:	bzr-externals
# Date created:				2010-08-30
# Whom:					Carlo Strub
#
# $FreeBSD: ports/devel/bzr-externals/Makefile,v 1.5 2012/11/17 05:55:36 svnexp Exp $
#

PORTNAME=	bzr-externals
PORTVERSION=	1.3.3
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://launchpadlibrarian.net/91495699/ \
		http://www.c-s.li/ports/

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Support external branches like svn:externals

LICENSE=	GPLv2

BUILD_DEPENDS=	bzr:${PORTSDIR}/devel/bzr
RUN_DEPENDS=	bzr:${PORTSDIR}/devel/bzr

WRKSRC=		${WRKDIR}/externals

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>
