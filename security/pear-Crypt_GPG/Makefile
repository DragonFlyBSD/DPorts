# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: security/pear-Crypt_GPG/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Crypt_GPG
PORTVERSION=	1.3.2
CATEGORIES=	security www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	GNU Privacy Guard (GPG)

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	posix
PEAR_AUTOINSTALL=yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
