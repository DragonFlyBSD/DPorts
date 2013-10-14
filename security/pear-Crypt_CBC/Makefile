# Created by: Thierry Thomas (<thierry@pompo.net>)
# $FreeBSD: security/pear-Crypt_CBC/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Crypt_CBC
PORTVERSION=	1.0.1
CATEGORIES=	security www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class to emulate Perl's Crypt::CBC module

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
