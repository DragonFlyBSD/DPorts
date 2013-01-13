# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/science/py-netCDF4/Makefile,v 1.17 2012/11/27 03:36:33 svnexp Exp $

PORTNAME=	netCDF4
PORTVERSION=	1.0.2
CATEGORIES=	science python
MASTER_SITES=	http://netcdf4-python.googlecode.com/files/ \
		CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python Interface to the NetCDF Library(versions 3 and 4)

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/numpy:${PORTSDIR}/math/py-numpy
RUN_DEPENDS:=	${BUILD_DEPENDS}
LIB_DEPENDS=	hdf5:${PORTSDIR}/science/hdf5-18 \
		netcdf:${PORTSDIR}/science/netcdf4

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes

post-patch:
	@${REINPLACE_CMD} -e 's#/usr/local#${LOCALBASE}#g' \
		${WRKSRC}/setup.py

.include <bsd.port.mk>
