# Created by: Thierry Thomas <thierry@pompo.net>
# $FreeBSD: sysutils/pear-File_Find/Makefile 313226 2013-03-02 11:53:19Z miwi $

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
