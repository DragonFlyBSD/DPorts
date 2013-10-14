# Created by: Ying-Chieh Liao <ijliao@csie.nctu.edu.tw>
# $FreeBSD: mail/py-libgmail/Makefile 327742 2013-09-20 19:59:12Z bapt $

PORTNAME=	libgmail
DISTVERSION=	0.1.11
CATEGORIES=	mail python
MASTER_SITES=	SF
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library to provide access to Gmail via Python

BUILD_DEPENDS=	py*-mechanize>=0:${PORTSDIR}/www/py-mechanize
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
