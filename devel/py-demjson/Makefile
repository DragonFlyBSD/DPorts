# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/py-demjson/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	demjson
PORTVERSION=	1.6
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP \
		http://deron.meranda.us/python/demjson/dist/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Encoder, Decoder, and Lint/Validator for JSON

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>

post-install:
	${INSTALL_SCRIPT} ${WRKSRC}/jsonlint ${PREFIX}/bin

.include <bsd.port.post.mk>
