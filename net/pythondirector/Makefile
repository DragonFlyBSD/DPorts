# Created by: Clement Laforet <clement@FreeBSD.org>
# $FreeBSD: net/pythondirector/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	pydirector
PORTVERSION=	1.0.0
CATEGORIES=	net python
MASTER_SITES=	SF/pythondirector/pythondirector/pythondirector-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A TCP load balancer written in Python

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/twisted/__init__.py:${PORTSDIR}/devel/py-twisted

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
PORTDOCS=		*

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/doc/* ${DOCSDIR}
.endif

.include <bsd.port.mk>
