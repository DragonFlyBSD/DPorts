# New ports collection makefile for:	ossp-sa
# Date created:				2003-01-31
# Whom:					Alan Eldridge <alane@geeksrus.net>
#
# $FreeBSD: ports/net/ossp-sa/Makefile,v 1.27 2012/11/17 06:00:09 svnexp Exp $
#

PORTNAME=	sa
PORTVERSION=	1.2.6
CATEGORIES=	net ipv6
MASTER_SITES=	${MASTER_SITE_OSSP}
MASTER_SITE_SUBDIR=	lib/${PORTNAME}
PKGNAMEPREFIX=	ossp-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An abstraction library for the Unix socket API

LIB_DEPENDS=	ex.10:${PORTSDIR}/devel/ossp-ex

USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-ex=${LOCALBASE}
USE_LDCONFIG=	yes

MAN3+=		sa.3

check:	build
	@(cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} check)

.include <bsd.port.mk>
