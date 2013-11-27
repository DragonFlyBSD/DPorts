# Created by: Thierry Thomas (<thierry@pompo.net>)
# $FreeBSD: security/pear-Crypt_CBC/Makefile 334871 2013-11-25 17:59:58Z antoine $

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
