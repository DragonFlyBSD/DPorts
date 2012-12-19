# $FreeBSD: ports/security/pear-Auth_HTTP/Makefile,v 1.10 2012/11/17 06:01:14 svnexp Exp $

PORTNAME=	Auth_HTTP
PORTVERSION=	2.1.8
CATEGORIES=	security www pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PEAR HTTP authentication

BUILD_DEPENDS=	${PEARDIR}/Auth/Auth.php:${PORTSDIR}/security/pear-Auth
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	Auth
PEAR_CATSRC=	yes
FILES=		HTTP.php
TESTS=		sample.sql test_basic_simple.php test_digest_simple.php \
		test_digest_get.php test_digest_post.php
_TESTSDIR=	docs

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
