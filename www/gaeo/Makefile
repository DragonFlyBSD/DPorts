# Created by: Yi-Jheng Lin <yzlin@cs.nctu.edu.tw>
# $FreeBSD: www/gaeo/Makefile 324852 2013-08-17 16:32:41Z bdrewery $

PORTNAME=	gaeo
PORTVERSION=	0.3
PORTEPOCH=	1
CATEGORIES=	www devel python
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An open-source web framework running on Google App Engine

RUN_DEPENDS=	google-appengine>=1.1.0:${PORTSDIR}/www/google-appengine \
		${PYTHON_PKGNAMEPREFIX}simplejson>1.9:${PORTSDIR}/devel/py-simplejson

PROJECTHOST=	google-app-engine-oil

USE_ZIP=	yes
USE_PYTHON=	2.5+
USE_PYDISTUTILS=	easy_install

GAEOHOME=	${PYTHON_SITELIBDIR}/${PYEASYINSTALL_EGG}

PORTDOCS=	LICENSE NOTICE README.TXT CHANGELOG

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_MAN} ${PORTDOCS:S,^,${WRKSRC}/,} ${DOCSDIR}
.endif

.include <bsd.port.mk>
