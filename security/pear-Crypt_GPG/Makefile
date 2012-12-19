# Ports collection makefile for:  pear-Crypt_GPG
# Date created:			  14 Jan 2008
# Whom:				  Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/security/pear-Crypt_GPG/Makefile,v 1.9 2012/11/17 06:01:14 svnexp Exp $
#

PORTNAME=	Crypt_GPG
PORTVERSION=	1.3.2
CATEGORIES=	security www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	GNU Privacy Guard (GPG)

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	posix
PEAR_AUTOINSTALL=yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
