# Created by: Rafal Lesniak <fbsd@grid.einherjar.de>
# $FreeBSD: ports/dns/py-idnkit2/Makefile,v 1.4 2013/01/12 11:42:04 svnexp Exp $

PORTNAME=	idnkit-python
PORTVERSION=	2.2
CATEGORIES=	dns
MASTER_SITES=	http://jprs.co.jp/idn/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	fbsd@grid.einherjar.de
COMMENT=	Python bindings for Internationalized Domain Name toolkit 2

LIB_DEPENDS=	idnkitlite.2:${PORTSDIR}/dns/idnkit2

USE_BZIP2=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/idnkit.so

post-patch:
		${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' \
		    ${WRKSRC}/setup.py

.include <bsd.port.mk>
