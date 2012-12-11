# ex:ts=8
# Ports collection makefile for:	py-simpy
# Date created:			Jun 29, 2004
# Whom:				ijliao
#
# $FreeBSD: ports/devel/py-simpy/Makefile,v 1.20 2012/11/17 05:56:50 svnexp Exp $

PORTNAME=	simpy
PORTVERSION=	2.3.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP \
		SF/${PORTNAME}/${PORTNAME}/SimPy-${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	SimPy-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Simulation in Python

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	SimPy

OPTIONS=	TKINTER		"Install py-tkinter for plot"      off
OPTIONSFILE=	${PORT_DBDIR}/py-${PORTNAME}/options

.include <bsd.port.pre.mk>

.if defined(WITH_TKINTER)
RUN_DEPENDS+=	${PYTHON_SITELIBDIR}/_tkinter.so:${PORTSDIR}/x11-toolkits/py-tkinter
.endif

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	(cd ${WRKSRC}/docs && ${COPYTREE_SHARE} . ${DOCSDIR})
.endif

.include <bsd.port.post.mk>
