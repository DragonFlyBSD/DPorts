# Created by: ijliao
# $FreeBSD: devel/py-mx-experimental/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	mx-experimental
PORTVERSION=	3.0.0
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	http://downloads.egenix.com/python/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	egenix-${PORTNAME}-${PORTVERSION}

MAINTAINER=	sergio@softshark.org
COMMENT=	The eGenix mx Extensions - EXPERIMENTAL Package

BUILD_DEPENDS=	${LOCALBASE}/include/gmp.h:${PORTSDIR}/math/gmp
#RUN_DEPENDS=	${PYTHON_SITELIBDIR}/mx/BeeBase/BeeBase.py:${PORTSDIR}/lang/py-mx-base

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	egenix-mx-experimental

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e "s|LIBGMPH|${PREFIX}/include|" ${WRKSRC}/mxEXPERIMENTAL.py

.include <bsd.port.mk>
