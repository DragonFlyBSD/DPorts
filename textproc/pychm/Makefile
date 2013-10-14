# Created by: Radek Kozlowski <radek@raadradd.com>
# $FreeBSD: textproc/pychm/Makefile 327773 2013-09-20 23:17:30Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
