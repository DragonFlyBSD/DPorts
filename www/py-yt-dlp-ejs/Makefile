PORTNAME=	yt-dlp-ejs
DISTVERSION=	0.8.0
CATEGORIES=	www
MASTER_SITES= PYPI https://files.pythonhosted.org/packages/py3/y/yt_dlp_ejs/:wheel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:S/-/_/g}-${DISTVERSION}
DISTFILES= ${DISTNAME}${EXTRACT_SUFX} ${DISTNAME}-py3-none-any.whl:wheel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	JavaScript challenge solver for yt-dlp
WWW=		https://github.com/yt-dlp/yt-dlp-ejs

LICENSE=	UNLICENSE
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=		aarch64 amd64
ONLY_FOR_ARCHS_REASON=	distinfo was only generated for these architectures # feel free to add more architectures

BUILD_DEPENDS= ${PYTHON_PKGNAMEPREFIX}hatch-vcs>=0:devel/py-hatch-vcs@${PY_FLAVOR} ${PYTHON_PKGNAMEPREFIX}hatchling>0:devel/py-hatchling@${PY_FLAVOR}
RUN_DEPENDS= node:www/node

USES=		python
USE_PYTHON=	pep517 autoplist pytest

TEST_ARGS=	--disable-plugin-autoload

SHEBANG_GLOB=	*.py

NO_ARCH=	yes

DD=		${DISTDIR}/${DIST_SUBDIR}

EXTRACT_ONLY= ${DISTNAME}${EXTRACT_SUFX}
.include <bsd.port.pre.mk>

DIST_SUBDIR= ${PORTNAME}
DISTINFO_FILE= ${.CURDIR}/dragonfly/distinfo



do-build:
	@${MKDIR} ${WRKSRC}/dist
	@${TAR} -xOf ${DD}/${DISTNAME}-py3-none-any.whl yt_dlp_ejs/yt/solver/core.min.js > ${WRKSRC}/dist/yt.solver.core.min.js
	@${TAR} -xOf ${DD}/${DISTNAME}-py3-none-any.whl yt_dlp_ejs/yt/solver/lib.min.js > ${WRKSRC}/dist/yt.solver.lib.min.js
	@cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${PYTHON_CMD} -m build --no-isolation --wheel --outdir ${WRKSRC}/dist

pre-test:
	# Copy built JavaScript files to test location
	@${MKDIR} ${WRKSRC}/yt_dlp_ejs/yt/solver
	@${CP} ${WRKSRC}/dist/yt.solver.core.min.js ${WRKSRC}/yt_dlp_ejs/yt/solver/core.min.js
	@${CP} ${WRKSRC}/dist/yt.solver.lib.min.js ${WRKSRC}/yt_dlp_ejs/yt/solver/lib.min.js

# tests as of 0.8.0:
# 1 passed in 0.01s

.include <bsd.port.post.mk>
