# zrj

PORTNAME=	cairo
PORTVERSION=	1.18.1
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	graphics python
MASTER_SITES=	https://github.com/pygobject/pycairo/releases/download/v${PORTVERSION}/
PKGNAMEPREFIX=	pyl-
DISTNAME=	py${PORTNAME}-${PORTVERSION}

MAINTAINER=	zrj@ef.irc
COMMENT=	Python-legacy bindings for Cairo

LICENSE=	LGPL21 MPL11
LICENSE_COMB=	multi
LICENSE_FILE_LGPL21=	${WRKSRC}/COPYING-LGPL-2.1
LICENSE_FILE_MPL11=	${WRKSRC}/COPYING-MPL-1.1

USES=		compiler:c11 gnome pkgconfig
USE_GNOME=	cairo

BUILD_DEPENDS+=	${LOCALBASE}/bin/python-legacy:lang/python-legacy
RUN_DEPENDS+=	${LOCALBASE}/bin/python-legacy:lang/python-legacy

PYTHONL_SITELIBDIR= lib/python-legacy/site-packages

PLIST_SUB=	PORTVER=${PORTVERSION} PYTHONL_SITELIBDIR=${PYTHONL_SITELIBDIR}

do-configure:
	(cd ${BUILD_WRKSRC}; ${SETENV} ${MAKE_ENV} python-legacy ./setup.py config)

do-build:
	(cd ${BUILD_WRKSRC}; ${SETENV} ${MAKE_ENV} python-legacy ./setup.py build)

do-install:
	(cd ${INSTALL_WRKSRC}; ${SETENV} ${MAKE_ENV} python-legacy ./setup.py install -c -O1 --prefix=${PREFIX} --root=${STAGEDIR})

post-install:
	${STRIP_CMD} ${STAGEDIR}${LOCALBASE}/${PYTHONL_SITELIBDIR}/cairo/_cairo.so
	${MV} ${STAGEDIR}${LOCALBASE}/include/pycairo/pycairo.h ${STAGEDIR}${LOCALBASE}/include/pycairo/pylcairo.h
	${MV} ${STAGEDIR}${LOCALBASE}/libdata/pkgconfig/pycairo.pc ${STAGEDIR}${LOCALBASE}/libdata/pkgconfig/pylcairo.pc
	${MV} ${STAGEDIR}${LOCALBASE}/${PYTHONL_SITELIBDIR}/cairo/include/pycairo.h ${STAGEDIR}${LOCALBASE}/${PYTHONL_SITELIBDIR}/cairo/include/pylcairo.h
	${RM} -rfv ${STAGEDIR}${LOCALBASE}/${PYTHONL_SITELIBDIR}/pycairo-*.egg-info

.include <bsd.port.mk>
