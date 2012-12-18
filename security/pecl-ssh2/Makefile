# New ports collection makefile for:	pecl-ssh2
# Date created:			20050407
# Whom:				Alexander Leidinger <netchild@FreeBSD.org>
#
# $FreeBSD: ports/security/pecl-ssh2/Makefile,v 1.10 2012/11/17 06:01:15 svnexp Exp $
#

PORTNAME=	ssh2
PORTVERSION=	0.11.3
CATEGORIES=	security pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A PECL extension to the libssh2 library

LIB_DEPENDS=	ssh2:${PORTSDIR}/security/libssh2

USE_PHP=	yes
USE_PHPEXT=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib ${EXTRA_LIBS}

CONFIGURE_ARGS=	--with-ssh2

.include <bsd.port.mk>
