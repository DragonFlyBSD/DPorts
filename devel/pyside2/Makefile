PORTNAME=	pyside2
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel
MASTER_SITES=	QT/official_releases/QtForPython/shiboken2/PySide2-${DISTVERSION}-src
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pyside-setup-opensource-src-${DISTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Python Qt bindings for Qt 5.12+
WWW=		https://wiki.qt.io/Qt_for_Python

LICENSE=	LGPL3

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools-scm>0:devel/py-setuptools-scm@${PY_FLAVOR} \
		git>0:devel/git
LIB_DEPENDS=	libshiboken2.cpython-${PYTHON_SUFFIX}${PYTHON_ABIVER}.so:devel/shiboken2@${PY_FLAVOR}

USES=		cmake gl python qt:5 tar:xz
USE_GL=		gl
USE_LDCONFIG=	yes
USE_PYTHON=	flavors
USE_QT=		3d buildtools:build charts concurrent core datavis3d declarative \
		designer gamepad gui help location multimedia network opengl \
		printsupport qmake:build quickcontrols2 remoteobjects serialport \
		script scripttools scxml sensors speech sql svg testlib uitools \
		webchannel websockets widgets x11extras xml xmlpatterns

CMAKE_ARGS+=	"-DUSE_PYTHON_VERSION=${PYTHON_VER}" \
		"-DPYTHON_EXECUTABLE=${PYTHON_CMD}"

OPTIONS_DEFINE_i386=	WEBENGINE
OPTIONS_DEFINE_x86_64=	WEBENGINE
OPTIONS_DEFAULT_i386=	WEBENGINE
OPTIONS_DEFAULT_x86_64=	WEBENGINE

WEBENGINE_DESC=	Enable QtWebEngine support

PLIST_SUB+=	PYVERSTR=.cpython-${PYTHON_SUFFIX}${PYTHON_ABIVER}
PLIST_SUB+=	DISTVERSION=${DISTVERSION}

WRKSRC=		${WRKDIR}/pyside-setup-opensource-src-${DISTVERSION:C/^([0-9].[0-9]+.[0-9])(.[0-9])?/\1/}/sources/pyside2

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MWEBENGINE}
PLIST_SUB+=	WEBENGINE=""
USE_QT+=	webengine
.else
PLIST_SUB+=	WEBENGINE="@comment "
CMAKE_ARGS+=	-DDISABLE_QtWebEngine:BOOL=TRUE
.endif

post-install:
	${PYTHON_CMD} ${PYTHON_LIBDIR}/compileall.py \
		-f -d ${PYTHONPREFIX_SITELIBDIR} \
		${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}
	${PYTHON_CMD} -O ${PYTHON_LIBDIR}/compileall.py \
		-f -d ${PYTHONPREFIX_SITELIBDIR} \
		${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}

.include <bsd.port.mk>
