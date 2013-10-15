# Created by: Sylvio Cesar <sylvio@FreeBSD.org>
# $FreeBSD: devel/pear-PEAR_PackageFileManager_Plugins/Makefile 327724 2013-09-20 17:13:42Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
