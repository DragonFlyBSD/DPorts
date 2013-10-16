# Created by: Jui-Nan Lin <jnlin@csie.nctu.edu.tw>
# $FreeBSD: devel/py-phpserialize/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	phpserialize
PORTVERSION=	0.4
PORTREVISION=	1
CATEGORIES=	devel lang www python
MASTER_SITES=	http://www.hurring.com/scott/code/python/serialize/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PHPSerialize_v${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	jnlin@csie.nctu.edu.tw
COMMENT=	A python implementation of PHP\'s native serialize() and unserialize()

WRKSRC=		${WRKDIR}/v${PORTVERSION}

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	PHPSerialize

NO_STAGE=	yes
post-extract:
	${SED} -e 's|%%PORTVERSION%%|${PORTVERSION}|g' ${FILESDIR}/setup.py \
		> ${WRKSRC}/setup.py

.include <bsd.port.mk>
