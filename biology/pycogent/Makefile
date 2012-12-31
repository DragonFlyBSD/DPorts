# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/biology/pycogent/Makefile,v 1.10 2012/11/17 05:54:53 svnexp Exp $

PORTNAME=	pycogent
PORTVERSION=	1.5.3
CATEGORIES=	biology python
MASTER_SITES=	SF/${PORTNAME}/PyCogent/${PORTVERSION}
DISTNAME=	PyCogent-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	wen@FreeBSD.org
COMMENT=	A toolkit for statistical analysis of biological sequences

BUILD_DEPENDS=	${PYNUMPY} \
		${LOCALBASE}/bin/cython:${PORTSDIR}/lang/cython \
		${LOCALBASE}/bin/sphinx-build:${PORTSDIR}/textproc/py-sphinx \
		${PYTHON_PKGNAMEPREFIX}sqlalchemy06>=0.5:${PORTSDIR}/databases/py-sqlalchemy06
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	cogent

.include <bsd.port.mk>
