# Created by: Sylvio Cesar <sylvio@FreeBSD.org>
# $FreeBSD: devel/pear-PEAR_PackageFileManager_Plugins/Makefile 318058 2013-05-13 09:57:51Z miwi $

PORTNAME=	PEAR_PackageFileManager_Plugins
PORTVERSION=	1.0.2
CATEGORIES=	devel www pear

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	The plugins for PEAR_PackageFileManager

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/XML/Serializer.php:${PORTSDIR}/devel/pear-XML_Serializer
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/XML/Serializer.php:${PORTSDIR}/devel/pear-XML_Serializer

LICENSE=	BSD

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
