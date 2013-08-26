# Ports collection makefile for:        py-networkx
# Date created:			June, 20  2008
# Whom:				dikshie
# $FreeBSD: math/py-networkx/Makefile 325262 2013-08-23 12:33:02Z demon $

PORTNAME=	networkx
PORTVERSION=	1.8.1
CATEGORIES=	math python
MASTER_SITES=	http://networkx.lanl.gov/download/networkx/ \
		CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dikshie@sfc.wide.ad.jp
COMMENT=	Tools for complex network

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
PYSETUP=	setup_egg.py

post-install:
.if !defined(NOPORTEXAMPLES)
	${MKDIR} ${EXAMPLESDIR}
	cd ${WRKSRC}/examples \
		&& ${FIND} . -type d -exec ${MKDIR} ${EXAMPLESDIR}/\{} \; \
		&& ${FIND} . -type f -exec ${INSTALL_DATA} \{} ${EXAMPLESDIR}/\{} \;
.endif

	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
