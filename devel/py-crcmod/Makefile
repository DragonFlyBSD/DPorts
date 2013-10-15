# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: devel/py-crcmod/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	crcmod
PORTVERSION=	1.7
CATEGORIES=	devel python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}/ \
		CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Module for Cyclic Redundancy Check (CRC) calculations

LICENSE=	MIT

# Python3 ready
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${WRKSRC}/changelog ${DOCSDIR}
	cd ${WRKSRC}/docs && ${COPYTREE_SHARE} html ${DOCSDIR}
.endif

.include <bsd.port.mk>
