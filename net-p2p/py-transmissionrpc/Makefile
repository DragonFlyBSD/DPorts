# Created by: Vladimir Korkodinov <newbieman@perm.raid.ru>
# $FreeBSD: net-p2p/py-transmissionrpc/Makefile 330540 2013-10-16 21:03:48Z rm $

PORTNAME=	transmissionrpc
PORTVERSION=	0.11
CATEGORIES=	net-p2p python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	python

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Python module that communicates with Transmission through JSON-RPC

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:${PORTSDIR}/devel/py-six

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
PYTHON_PY3K_PLIST_HACK=	yes

NO_STAGE=	yes

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
PLIST_DIRS=	%%DOCSDIR%%
PLIST_FILES+=	%%DOCSDIR%%/README
.endif

post-patch:
	@${REINPLACE_CMD} -e 's,zip_safe=True,zip_safe=False,g' \
		${WRKSRC}/setup.py

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
