# New ports collection makefile for:	py-dpkt
# Date created:		18 Apr 2006
# Whom:			Krzysztof Pawlowski
#
# $FreeBSD: ports/net/py-dpkt/Makefile,v 1.9 2012/11/17 06:00:16 svnexp Exp $
#

PORTNAME=	dpkt
PORTVERSION=	1.7
CATEGORIES=	net python
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	Python fast, simple packet creation / parsing module

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
USE_PYTHON_PREFIX=	yes

EXAMPLESDIR=	${PREFIX}/share/examples/py-${PORTNAME}

.if !defined(NOPORTEXAMPLES)
post-install:
	@${MKDIR} ${EXAMPLESDIR}
	@(cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} \* ${EXAMPLESDIR})
.endif

.include <bsd.port.mk>
