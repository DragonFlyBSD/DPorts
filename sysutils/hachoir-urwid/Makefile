# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: sysutils/hachoir-urwid/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	hachoir-urwid
PORTVERSION=	1.1
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Binary file explorer

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/hachoir_parser/__init__.py:${PORTSDIR}/devel/hachoir-parser \
		${PYTHON_SITELIBDIR}/urwid/__init__.py:${PORTSDIR}/devel/py-urwid

USE_PYTHON=	yes
USE_PYDISTUTILS=yes

.include <bsd.port.mk>
