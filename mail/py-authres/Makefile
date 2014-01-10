# Created by: Yasuhiro KIMURA <yasu@utahime.org>
# $FreeBSD: mail/py-authres/Makefile 338513 2014-01-03 01:12:59Z bapt $

PORTNAME=	authres
PORTVERSION=	0.602
CATEGORIES=	mail python
MASTER_SITES=	http://launchpad.net/authentication-results-python/trunk/0.602/+download/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yasu@utahime.org
COMMENT=	Python module for RFC 5451 Authentication-Results headers

LICENSE=	APACHE20

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

PLIST_SUB+=	PORTNAME=${PORTNAME}

PORTDOCS=	CHANGES README

OPTIONS_DEFINE=	DOCS

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
