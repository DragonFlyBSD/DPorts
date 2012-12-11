# New ports collection makefile for:	py-aspyct
# Date created:		2009-08-07
# Whom:			Sofian Brabez <sbrabez@gmail.com>
#
# $FreeBSD: ports/devel/py-aspyct/Makefile,v 1.4 2012/11/17 05:56:45 svnexp Exp $
#

PORTNAME=	aspyct
PORTVERSION=	3.0
CATEGORIES=	devel python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}%20beta%204
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:C/a/A/}-${PORTVERSION}_beta_4

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	Python library including an aspect-oriented programming (AOP) engine

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes
PYDISTUTILS_EGGINFO=	${DISTNAME}-py${PYTHON_VER}.egg-info

post-install:
.if !defined(BATCH)
	@${CAT} ${PKGMESSAGE}
.endif

.include <bsd.port.mk>
