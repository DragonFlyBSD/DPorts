# Created by: Vsevolod Lobko <seva@sevasoft.kiev.ua>
# $FreeBSD$

PORTNAME=	milter
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	mail python
MASTER_SITES=	SF/${PYPORTNAME}/${PYPORTNAME}/${DISTNAME}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PYPORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python interface to Sendmail milter API

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

PYPORTNAME=	${PKGNAMEPREFIX:C/[0-9]+-//}${PORTNAME}

DIST_SUBDIR=	python
USES=		python:2
USE_PYTHON=	distutils autoplist

.include <bsd.port.options.mk>
.include "${.CURDIR}/../../mail/sendmail/bsd.milter.mk"

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/milter.so

.include <bsd.port.mk>
