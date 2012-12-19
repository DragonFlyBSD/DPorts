# Ports collection makefile for:  pear-Text_Password
# Date created:			  29 March 2004
# Whom:				  Attila Nagy <bra@fsn.hu>
#
# $FreeBSD: ports/security/pear-Text_Password/Makefile,v 1.12 2012/11/17 06:01:15 svnexp Exp $
#

PORTNAME=	Text_password
PORTVERSION=	1.1.1
CATEGORIES=	security www pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PEAR random password creator

USE_PHP=	yes

CATEGORY=	Text
FILES=		Password.php
TESTS=		Text_Password_Test.php

WRKSRC=		${WRKDIR}/Text_Password-${PORTVERSION}

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
