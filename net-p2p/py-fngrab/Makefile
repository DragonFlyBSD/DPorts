# ex:ts=8
# Ports collection makefile for:	py-fngrab
# Date created:			Mar 23, 2002
# Whom:	      			ijliao
#
# $FreeBSD: ports/net-p2p/py-fngrab/Makefile,v 1.10 2012/11/17 06:00:40 svnexp Exp $
#

PORTNAME=	fngrab
PORTVERSION=	0.0.4
CATEGORIES=	net-p2p python
MASTER_SITES=	SF/freebbs/${PORTNAME}-${PORTVERSION}/${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A replacement for the official Freenet Project's freenet_request

BUILD_DEPENDS=	${PYXML}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	FreenetGrab

post-install:
	@${MV} ${PREFIX}/bin/fngrab.py ${PREFIX}/bin/fngrab

.include <bsd.port.mk>
