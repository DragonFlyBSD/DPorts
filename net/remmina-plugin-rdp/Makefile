# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: net/remmina-plugin-rdp/Makefile 327755 2013-09-20 22:10:23Z bapt $

PKGNAMESUFFIX=	-rdp

COMMENT=	Remmina plugin for RDP protocol

BUILD_DEPENDS=	freerdp>=1.0.0:${PORTSDIR}/net/freerdp
RUN_DEPENDS=	${BUILD_DEPENDS}

MASTERDIR=	${.CURDIR}/../remmina-plugins

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
