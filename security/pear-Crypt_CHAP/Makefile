# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: security/pear-Crypt_CHAP/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Crypt_CHAP
PORTVERSION=	1.5.0
CATEGORIES=	security www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class for generating CHAP packets

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	mcrypt mhash

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
