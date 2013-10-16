# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: security/pear-File_SMBPasswd/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	File_SMBPasswd
PORTVERSION=	1.0.3
CATEGORIES=	security www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class for managing SAMBA style password files

BUILD_DEPENDS=	${PEARDIR}/Crypt/CHAP.php:${PORTSDIR}/security/pear-Crypt_CHAP
RUN_DEPENDS=	${PEARDIR}/Crypt/CHAP.php:${PORTSDIR}/security/pear-Crypt_CHAP

USE_PHP=	mhash
PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
