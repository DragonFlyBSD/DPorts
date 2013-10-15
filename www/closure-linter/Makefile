# Created by: Julien Laffaye <kimelto@gmail.com>
# $FreeBSD: www/closure-linter/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	closure-linter
PORTVERSION=	2.3.5
CATEGORIES=	www devel
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	closure_linter-${PORTVERSION}

MAINTAINER=	jlaffaye@FreeBSD.org
COMMENT=	JavaScript linter

LICENSE=	AL2

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/gflags:${PORTSDIR}/devel/py-gflags

USE_PYTHON=	-2.7
USE_PYDISTUTILS=easy_install

PLIST_FILES=	bin/fixjsstyle \
		bin/gjslint \
		%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

NO_STAGE=	yes
.include <bsd.port.mk>
