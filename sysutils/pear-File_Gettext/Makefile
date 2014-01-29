# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: sysutils/pear-File_Gettext/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	File_Gettext
PORTVERSION=	0.4.2
CATEGORIES=	sysutils devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR GNU Gettext file parser

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	yes

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
