# Created by: Thierry Thomas <thierry@pompo.net>
# $FreeBSD: sysutils/pear-File_Find/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	File_Find
PORTVERSION=	1.3.1
CATEGORIES=	sysutils www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class that facilitates the search of filesystems

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
