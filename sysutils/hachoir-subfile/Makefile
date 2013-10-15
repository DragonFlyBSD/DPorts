# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: sysutils/hachoir-subfile/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	hachoir-subfile
PORTVERSION=	0.5.3
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Find subfiles in any binary stream

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/hachoir_parser/__init__.py:${PORTSDIR}/devel/hachoir-parser \
		${PYTHON_SITELIBDIR}/hachoir_regex/__init__.py:${PORTSDIR}/devel/hachoir-regex

USE_PYTHON=	yes
USE_PYDISTUTILS=yes

NO_STAGE=	yes
.include <bsd.port.mk>
