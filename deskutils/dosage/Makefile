# Created by: Antoine Brodin <antoine@FreeBSD.org>
# $FreeBSD: deskutils/dosage/Makefile 333725 2013-11-13 20:10:09Z antoine $

PORTNAME=	dosage
PORTVERSION=	2.6
CATEGORIES=	deskutils python
MASTER_SITES=	http://wummel.github.io/dosage/dist/

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Application to keep a local mirror of web comics

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>0:${PORTSDIR}/www/py-requests

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGNAME=Dosage
PYTHON_PY3K_PLIST_HACK=yes

post-patch:
	@${REINPLACE_CMD} -e 's|share/man/man1|man/man1|' ${WRKSRC}/setup.py

.include <bsd.port.mk>
