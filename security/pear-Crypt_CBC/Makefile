# Ports collection makefile for:  pear-Crypt_CBC
# Date created:			  28 November 2002
# Whom:				  Thierry Thomas (<thierry@pompo.net>)
#
# $FreeBSD: ports/security/pear-Crypt_CBC/Makefile,v 1.17 2012/11/17 06:01:14 svnexp Exp $
#

PORTNAME=	Crypt_CBC
PORTVERSION=	1.0.1
CATEGORIES=	security www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class to emulate Perl's Crypt::CBC module

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
