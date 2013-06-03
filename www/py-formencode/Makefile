# Created by: Choe, Cheng-Dae
# $FreeBSD: www/py-formencode/Makefile 318585 2013-05-20 08:55:29Z miwi $

PORTNAME=	formencode
PORTVERSION=	1.2.6
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	FormEncode-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	HTML form validation, generation, and conversion package

LICENSE=	PSFL

OPTIONS_DEFINE=	DOCS

USE_ZIP=	yes
USES=		gettext:run
USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	FormEncode

DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}

PORTDOCS=	*

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	@(cd ${WRKSRC}/docs/ && ${COPYTREE_SHARE} . ${DOCSDIR})
.endif

.include <bsd.port.mk>
