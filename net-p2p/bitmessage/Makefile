# Created by: Yuri Victorovich <yuri@tsoft.com>
# $FreeBSD: net-p2p/bitmessage/Makefile 335791 2013-12-06 23:29:54Z feld $

PORTNAME=	bitmessage
PORTVERSION=	0.4.1
CATEGORIES=	net-p2p
MASTER_SITES=	GH

MAINTAINER=	yuri@tsoft.com
COMMENT=	Secure P2P communications client

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlite3>0:${PORTSDIR}/databases/py-sqlite3 \
		${PYTHON_PKGNAMEPREFIX}qt4-core>=${PYQT4_VERSION}:${PORTSDIR}/devel/py-qt4-core \
		${PYTHON_PKGNAMEPREFIX}qt4-gui>=${PYQT4_VERSION}:${PORTSDIR}/x11-toolkits/py-qt4-gui

USE_GITHUB=	yes
GH_ACCOUNT=	Bitmessage
GH_PROJECT=	PyBitmessage
GH_COMMIT=	e21fdb4
GH_TAGNAME=	v${PORTVERSION}

USE_OPENSSL=	yes
USE_PYTHON=	yes
INSTALLS_ICONS=	yes

do-build:
	@(cd ${WRKSRC} && \
	${PYTHON_CMD} ${PYTHON_LIBDIR}/compileall.py \
		-d ${WRKSRC} -f ${WRKSRC} && \
	${PYTHON_CMD} -O ${PYTHON_LIBDIR}/compileall.py \
		-d ${WRKSRC} -f ${WRKSRC})

.include <bsd.port.mk>
