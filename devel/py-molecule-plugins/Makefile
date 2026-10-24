PORTNAME=	molecule-plugins
PORTVERSION=	25.8.12
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTFILES=	molecule_plugins-${PORTVERSION}${EXTRACT_SUFX}

MAINTAINER=	dch@FreeBSD.org
COMMENT=	Collection of provider plugins for Molecule testing framework
WWW=		https://github.com/ansible-community/molecule-plugins

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PY_SETUPTOOLS} \
		${PYTHON_PKGNAMEPREFIX}setuptools-scm>=7.0.5:devel/py-setuptools-scm@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}molecule>=25.1.0:devel/py-molecule@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent pep517

WRKSRC=		${WRKDIR}/molecule_plugins-${PORTVERSION}

NO_ARCH=	yes

OPTIONS_DEFINE=		DOCKER GCE OPENSTACK
DOCKER_DESC=		Docker driver support
GCE_DESC=		Google Compute Engine driver support
OPENSTACK_DESC=		OpenStack driver support
DOCKER_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}docker>=4.3.1:sysutils/py-docker@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR}
GCE_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=2.31.0:www/py-requests@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}google-auth>=2.28.2:security/py-google-auth@${PY_FLAVOR}
OPENSTACK_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}openstacksdk>=1.1.0:devel/py-openstacksdk@${PY_FLAVOR}

.include <bsd.port.mk>
