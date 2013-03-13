# Created by: Antoine Brodin <antoine@FreeBSD.org>
# $FreeBSD: deskutils/dosage/Makefile 313727 2013-03-09 16:33:21Z rm $

PORTNAME=	dosage
PORTVERSION=	1.12
CATEGORIES=	deskutils python

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Application to keep a local mirror of web comics

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>0:${PORTSDIR}/www/py-requests

USE_GITHUB=	yes
GH_ACCOUNT=	wummel
GH_TAGNAME=	upstream/${PORTVERSION}
GH_COMMIT=	9d6f4ee

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGNAME=	Dosage

MAN1=		dosage.1

post-patch:
	@${REINPLACE_CMD} -e 's|share/man/man1|man/man1|' ${WRKSRC}/setup.py

.include <bsd.port.mk>
