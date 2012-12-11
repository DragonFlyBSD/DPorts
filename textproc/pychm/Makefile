# New ports collection makefile for:	pychm
# Date created:				25 November 2004
# Whom:					Radek Kozlowski <radek@raadradd.com>
#
# $FreeBSD: ports/textproc/pychm/Makefile,v 1.7 2012/11/17 06:02:18 svnexp Exp $
#

PORTNAME=	pychm
PORTVERSION=	0.8.4
CATEGORIES=	textproc python
MASTER_SITES=	SF/gnochm/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Bindings for CHMLIB library

LIB_DEPENDS=	chm.0:${PORTSDIR}/misc/chmlib

NO_BUILD=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_INSTALLARGS=	build_ext -I${LOCALBASE}/include -L${LOCALBASE}/lib \
				install -c -O1 --prefix=${PREFIX}

.include <bsd.port.mk>
