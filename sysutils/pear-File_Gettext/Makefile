# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: sysutils/pear-File_Gettext/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	File_Gettext
PORTVERSION=	0.4.2
CATEGORIES=	sysutils devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR GNU Gettext file parser

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	yes

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
