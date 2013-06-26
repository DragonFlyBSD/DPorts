# Created by: Byung-Hee HWANG <bh@izb.knu.ac.kr>
# $FreeBSD: audio/py-mutagen/Makefile 321575 2013-06-22 14:49:53Z swills $

PORTNAME=	mutagen
PORTVERSION=	1.21
CATEGORIES=	audio python
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	johnson.peter@gmail.com
COMMENT=	A Python-based audio metadata tag reader and writer

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

MAN1=		mid3iconv.1 \
		mid3v2.1 \
		moggsplit.1 \
		mutagen-inspect.1 \
		mutagen-pony.1

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|share/man/man1|man/man1|' ${WRKSRC}/setup.py

.include <bsd.port.post.mk>
