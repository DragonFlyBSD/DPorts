# $FreeBSD: japanese/py-zinnia/Makefile 327737 2013-09-20 18:47:54Z bapt $

# Date created:				15 Aug 2010
# Whom:					Timothy Beyer <beyert@cs.ucr.edu>
#
# $FreeBSD: japanese/py-zinnia/Makefile 327737 2013-09-20 18:47:54Z bapt $
#

PORTNAME=	zinnia
PORTVERSION=	0.06
CATEGORIES=	japanese python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	beyert@cs.ucr.edu
COMMENT=	Zinnna Python Interface

LIB_DEPENDS=	zinnia.0:${PORTSDIR}/japanese/zinnia
RUN_DEPENDS=	zinnia:${PORTSDIR}/japanese/zinnia

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/COPYING

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGNAME=	${PORTNAME}_python
PYDISTUTILS_PKGVERSION=	0.0.0

NO_STAGE=	yes
.include <bsd.port.pre.mk>

LDFLAGS+=	-L${LOCALBASE}/lib
MAKE_ENV:=	${CONFIGURE_ENV}

post-extract:
	${CP} -pR ${WRKSRC}/python/* ${WRKSRC}/

.include <bsd.port.post.mk>
