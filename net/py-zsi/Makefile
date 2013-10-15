# Created by: Johann Visagie <wjv@FreeBSD.org>
# $FreeBSD: net/py-zsi/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	zsi
PORTVERSION=	2.0
PORTEPOCH=	1
CATEGORIES=	net python
MASTER_SITES=	SF/pywebsvcs/ZSI/ZSI-${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:tu}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A pure Python module that provides an implementation of SOAP 1.1

BUILD_DEPENDS=	${PYXML}
RUN_DEPENDS=	${PYXML}

CONFLICTS=	py-zsi-devel-2.*

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	ZSI

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for docfile in CHANGES README doc/zsi.* doc/*.tex
	@${INSTALL_DATA} ${WRKSRC}/${docfile} ${DOCSDIR}
.endfor
.endif
.if !defined(NOPORTEXAMPLES)
.for subdir in interop samples test
	@${MKDIR} ${EXAMPLESDIR}/${subdir}
	@${CP} -rp ${WRKSRC}/${subdir}/* ${EXAMPLESDIR}/${subdir}
.endfor
.endif

.include <bsd.port.mk>
