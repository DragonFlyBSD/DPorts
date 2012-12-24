# New ports collection makefile for:	pygts
# Date created:		17 May, 2009
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/graphics/pygts/Makefile,v 1.5 2012/11/17 05:58:21 svnexp Exp $
#

PORTNAME=	pygts
PORTVERSION=	0.3.1
CATEGORIES=	graphics python
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python binding for GNU Triangulated Surface(GTS) Library

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}
LIB_DEPENDS=	gts.5:${PORTSDIR}/graphics/gts

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>
