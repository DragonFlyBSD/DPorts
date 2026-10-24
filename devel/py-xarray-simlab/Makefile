PORTNAME=	xarray-simlab
DISTVERSION=	0.5.0-5
DISTVERSIONSUFFIX=	-g33a4c83
PORTREVISION=	5
CATEGORIES=	devel python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Xarray extension and framework for computer model simulations
WWW=		https://xarray-simlab.readthedocs.io/en/latest/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}attrs>=18.1.0:devel/py-attrs@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}dask>0:devel/py-dask@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}distributed>0:devel/py-distributed@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}numpy>=1.16:math/py-numpy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xarray>=0.10.0:devel/py-xarray@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zarr>=2.3.0:devel/py-zarr@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist pytest # 1 test fails, see https://github.com/xarray-contrib/xarray-simlab/issues/192

USE_GITHUB=	yes
GH_ACCOUNT=	xarray-contrib

NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|configparser.SafeConfigParser()|configparser.ConfigParser()|g' \
		-e 's|parser.readfp(f)|parser.read_file(f)|g' ${WRKSRC}/versioneer.py

.include <bsd.port.mk>
