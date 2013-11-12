# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: textproc/py-pysrt/Makefile 333486 2013-11-11 11:21:37Z wg $

PORTNAME=	pysrt
PORTVERSION=	0.5.1
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	SubRip (.srt) subtitle parser and writer

LICENSE=	GPLv3

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_AUTOPLIST=	yes

post-patch:
	@${REINPLACE_CMD} 's/="GPLv3",/="GPLv3", zip_safe=False,/' \
		${WRKSRC}/setup.py

.include <bsd.port.mk>
