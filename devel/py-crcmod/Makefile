# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: devel/py-crcmod/Makefile 340722 2014-01-22 17:00:46Z mat $

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
