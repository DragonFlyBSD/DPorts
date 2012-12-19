# Ports collection makefile for:  pear-Auth_PrefManager
# Date created:			  05 April 2005
# Whom:				  Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
#
# $FreeBSD: ports/security/pear-Auth_PrefManager/Makefile,v 1.7 2012/11/17 06:01:14 svnexp Exp $
#

PORTNAME=	Auth_PrefManager
PORTVERSION=	1.2.1
CATEGORIES=	security www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR preferences management class

BUILD_DEPENDS=	${PEARDIR}/DB.php:${PORTSDIR}/databases/pear-DB
RUN_DEPENDS:=	${BUILD_DEPENDS}

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
