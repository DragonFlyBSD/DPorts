# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: net/remmina-plugin-rdp/Makefile 339795 2014-01-15 17:28:00Z fluffy $

PKGNAMESUFFIX=	-rdp

COMMENT=	Remmina plugin for RDP protocol

LIB_DEPENDS=	libfreerdp-core.so:${PORTSDIR}/net/freerdp

MASTERDIR=	${.CURDIR}/../remmina-plugins

PLIST_SUB+=	ICONS="" SSH=""

.include "${MASTERDIR}/Makefile"
