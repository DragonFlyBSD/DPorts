# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: net/remmina-plugin-telepathy/Makefile 339795 2014-01-15 17:28:00Z fluffy $

PKGNAMESUFFIX=	-telepathy

COMMENT=	Remmina plugin for Telepathy support

USE_GNOME+=	gtk30
LIB_DEPENDS=	libtelepathy-glib.so:${PORTSDIR}/net-im/telepathy-glib

MASTERDIR=	${.CURDIR}/../remmina-plugins

PLIST_SUB+=	ICONS="@comment "

.include "${MASTERDIR}/Makefile"
