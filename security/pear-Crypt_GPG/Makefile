# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: security/pear-Crypt_GPG/Makefile 334871 2013-11-25 17:59:58Z antoine $

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
