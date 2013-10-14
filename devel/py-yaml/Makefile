# Created by: ijliao@FreeBSD.org
# $FreeBSD: devel/py-yaml/Makefile 328034 2013-09-23 19:56:47Z demon $

PORTNAME=	yaml
PORTVERSION=	3.10
CATEGORIES=	devel python
MASTER_SITES=	http://pyyaml.org/download/pyyaml/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PyYAML-${PORTVERSION}

MAINTAINER=	jpaetzel@FreeBSD.org
COMMENT=	Python YAML parser

OPTIONS_DEFINE=	YAML

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	PyYAML

# bypass infrastructure bug
OPTIONSFILE=	${PORT_DBDIR}/py-${PORTNAME}/options

EXAMPLESDIR=	${PREFIX}/share/examples/py-${PORTNAME}

NO_STAGE=	yes
.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MEXAMPLES}
post-install:
	@(cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${EXAMPLESDIR}/)
.endif

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} >= 320
.include "${PORTSDIR}/devel/py-virtualenv/files/py3k-fix-pkg-plist.inc"
.endif

.if ${PORT_OPTIONS:MYAML}
PYSETUP=	setup.py --with-libyaml
PYDISTUTILS_BUILD_TARGET=	build_ext
PYDISTUTILS_BUILDARGS+=	--include-dirs=${LOCALBASE}/include \
			--library-dirs=${LOCALBASE}/lib

LIB_DEPENDS+=		yaml-0.2:${PORTSDIR}/textproc/libyaml

PLIST_SUB+=	YAML=""
.else
PYSETUP=	setup.py --without-libyaml

PLIST_SUB+=	YAML="@comment "
.endif

.include <bsd.port.post.mk>
