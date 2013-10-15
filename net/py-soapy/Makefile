# Created by: Johann Visagie <wjv@FreeBSD.org>
# $FreeBSD: net/py-soapy/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	soapy
PORTVERSION=	0.1
CATEGORIES=	net python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	SOAP/XML schema library for Python

RUN_DEPENDS=	${PYXML}

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	@ ${MKDIR} ${DOCSDIR}
	@ ${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
	@ ${MKDIR} ${EXAMPLESDIR}/test
	@ ${INSTALL_DATA} ${WRKSRC}/examples/* ${EXAMPLESDIR}
	@ ${INSTALL_DATA} ${WRKSRC}/test/* ${EXAMPLESDIR}/test
.endif

.include <bsd.port.mk>
