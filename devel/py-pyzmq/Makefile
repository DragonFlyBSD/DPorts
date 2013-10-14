# Created by: Roman Bogorodskiy <novel@FreeBSD.org>
# $FreeBSD: devel/py-pyzmq/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	pyzmq
PORTVERSION=	2.2.0
CATEGORIES=	devel net
MASTER_SITES=	http://cloud.github.com/downloads/zeromq/pyzmq/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	novel@FreeBSD.org
COMMENT=	Python bindings for ZeroMQ

LICENSE=	LGPL3

LIB_DEPENDS=	zmq.1:${PORTSDIR}/devel/zmq

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>

pre-configure:
	@${SED} -e 's|/usr/local|${LOCALBASE}|' ${WRKSRC}/setup.cfg.template > \
		${WRKSRC}/setup.cfg

.include <bsd.port.post.mk>
