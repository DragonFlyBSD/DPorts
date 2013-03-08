# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: www/trac-TracDuplicates/Makefile 313232 2013-03-02 14:36:46Z miwi $

PORTNAME=	TracDuplicates
PORTVERSION=	0.11
CATEGORIES=	www python
MASTER_SITES=	GH
PKGNAMEPREFIX=	trac-

MAINTAINER=	gslin@gslin.org
COMMENT=	Notice original ticket to dupe one

LICENSE=	BSD

RUN_DEPENDS=	trac>=0:${PORTSDIR}/www/trac

GH_ACCOUNT=	nmaier
GH_COMMIT=	22976dd
USE_GITHUB=	yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
