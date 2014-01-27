# Created by: Li-Wen Hsu <lwhsu@lwhsu.org>
# $FreeBSD: www/py-httplib2/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	httplib2
PORTVERSION=	0.8
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	A comprehensive HTTP client library

LICENSE=	MIT

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes

.include <bsd.port.pre.mk>

post-patch:
	${FIND} ${WRKSRC} -type f -exec ${CHMOD} 644 {} \;
	${FIND} ${WRKSRC} -type d -exec ${CHMOD} 755 {} \;

.include <bsd.port.post.mk>
