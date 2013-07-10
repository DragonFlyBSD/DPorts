# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: net/remmina-plugin-rdp/Makefile 321344 2013-06-20 01:59:25Z fluffy $

PKGNAMESUFFIX=	-rdp

COMMENT=	Remmina plugin for RDP protocol

BUILD_DEPENDS=	freerdp>=1.0.0:${PORTSDIR}/net/freerdp
RUN_DEPENDS=	${BUILD_DEPENDS}

MASTERDIR=	${.CURDIR}/../remmina-plugins

.include "${MASTERDIR}/Makefile"
