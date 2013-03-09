# Created by: ijliao
# $FreeBSD: ports/math/rpy2/Makefile,v 1.39 2013/01/04 18:45:35 svnexp Exp $

PORTNAME=	rpy2
PORTVERSION=	2.2.6
PORTREVISION=	4
CATEGORIES=	math
MASTER_SITES=	CHEESESHOP \
		SF

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Python interface to the R Programming Language

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/numpy:${PORTSDIR}/math/py-numpy \
		R:${PORTSDIR}/math/R
RUN_DEPENDS=	${PYTHON_SITELIBDIR}/numpy:${PORTSDIR}/math/py-numpy \
		R:${PORTSDIR}/math/R

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' ${WRKSRC}/setup.py

pre-configure:
	@(if [ ! -e ${LOCALBASE}/lib/R/lib/libR.so ] ; then \
	${ECHO_MSG} "==> ${PKGNAME} requires math/R to be built WITH_LIBR" ; \
	exit 1; fi)

.include <bsd.port.mk>
