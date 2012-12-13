# New ports collection makefile for:	hachoir-subfile
# Date created:		13 July 2007
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/sysutils/hachoir-subfile/Makefile,v 1.4 2012/11/17 06:01:34 svnexp Exp $
#

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

.include <bsd.port.mk>
