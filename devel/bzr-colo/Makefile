# Ports collection makefile for:	bzr-colo
# Date created:		2010-10-18
# Whom:			Carlo Strub
#
# $FreeBSD: ports/devel/bzr-colo/Makefile,v 1.7 2012/11/17 05:55:36 svnexp Exp $
#

PORTNAME=	bzr-colo
PORTVERSION=	0.4.0
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	https://launchpadlibrarian.net/91504187/ \
		http://www.c-s.li/ports/

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Plugin for bzr to support colocated branches

LICENSE=	GPLv2

BUILD_DEPENDS=	bzr:${PORTSDIR}/devel/bzr
RUN_DEPENDS=	bzr:${PORTSDIR}/devel/bzr

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	bzr_colo

.include <bsd.port.mk>
