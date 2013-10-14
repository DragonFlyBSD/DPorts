# Created by: gnn
# $FreeBSD: net/py-pcs/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	pcs
PORTVERSION=	0.6
CATEGORIES=	net python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/Beta-${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gnn@FreeBSD.org
COMMENT=	Protocol Construction Set

PORTDOCS=	pcs.pdf
PORTEXAMPLES=	*

BUILD_DEPENDS=	cython>=0.11.2:${PORTSDIR}/lang/cython

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
USE_PYTHON_PREFIX=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC}/docs/Web && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}
.endif

.if !defined(NOPORTEXAMPLES)
	@${MKDIR} ${EXAMPLESDIR}
	cd ${WRKSRC}/scripts && ${INSTALL_DATA} ${PORTEXAMPLES} ${EXAMPLESDIR}
.endif

.include <bsd.port.post.mk>
