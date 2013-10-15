# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: net/py-pysendfile/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	pysendfile
PORTVERSION=	2.0.0
CATEGORIES=	net python devel
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	A Python interface to sendfile(2)

CONFLICTS_INSTALL=	py*-sendfile-[0-9]*

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	easy_install
PYEASYINSTALL_ARCHDEP=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
