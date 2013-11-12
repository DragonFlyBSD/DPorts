# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: x11-fonts/py-bdflib/Makefile 333049 2013-11-07 01:31:09Z danfe $

PORTNAME=	bdflib
PORTVERSION=	1.0.0
CATEGORIES=	x11-fonts python
MASTER_SITES=	CHEESESHOP/source/b/${PORTNAME}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-v${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Library for working with BDF font files

LICENSE=	GPLv3

USE_PYTHON=	2
USE_PYDISTUTILS=	yes

post-patch:
	@${REINPLACE_CMD} -e '/def/!s,guess_version(),"${PORTVERSION}",' \
		${WRKSRC}/${PYSETUP}

.include <bsd.port.mk>
