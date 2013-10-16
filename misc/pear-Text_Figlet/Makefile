# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: misc/pear-Text_Figlet/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	Text_Figlet
PORTVERSION=	1.0.2
CATEGORIES=	misc www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Render text using FIGlet fonts

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
