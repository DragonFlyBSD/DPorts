# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: ftp/pear-Net_FTP/Makefile 327729 2013-09-20 17:23:18Z bapt $

PORTNAME=	Net_FTP
PORTVERSION=	1.3.7
PORTREVISION=	1
CATEGORIES=	ftp www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR OO interface to the PHP FTP functions plus some additions

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	ftp
PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
