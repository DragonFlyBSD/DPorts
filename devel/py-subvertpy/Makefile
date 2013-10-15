# Created by: Carlo Strub (c-s@c-s.li)
# $FreeBSD: devel/py-subvertpy/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	subvertpy
PORTVERSION=	0.8.10
CATEGORIES=	devel
MASTER_SITES=	https://launchpadlibrarian.net/90814723/ \
		http://www.c-s.li/ports/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Python bindings for subversion

LICENSE=	GPLv2

BUILD_DEPENDS+=	svn:${PORTSDIR}/devel/subversion

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	subvertpy

NO_STAGE=	yes
#post-patch:
#		@${REINPLACE_CMD} -e 's#/usr/local#${LOCALBASE}#g' ${WRKSRC}/setup.py

.include <bsd.port.mk>
