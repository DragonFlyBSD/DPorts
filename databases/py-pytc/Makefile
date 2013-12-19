# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: databases/py-pytc/Makefile 336187 2013-12-11 18:08:52Z bapt $

PORTNAME=	pytc
PORTVERSION=	0.8
PORTREVISION=	7
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Tokyo Cabinet Python bindings

LIB_DEPENDS=	libtokyocabinet.so:${PORTSDIR}/databases/tokyocabinet

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.pre.mk>

post-patch:
	${REINPLACE_CMD} -e 's,%%LOCALBASE%%,${LOCALBASE},' ${WRKSRC}/setup.py

.include <bsd.port.post.mk>
