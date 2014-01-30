# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: net/remmina-plugin-vnc/Makefile 339795 2014-01-15 17:28:00Z fluffy $

PKGNAMESUFFIX=	-vnc

COMMENT=	Remmina plugin for VNC protocol

LIB_DEPENDS=	libjpeg.so:${PORTSDIR}/graphics/jpeg \
		libgnutls.so:${PORTSDIR}/security/gnutls \
		libgcrypt.so:${PORTSDIR}/security/libgcrypt \
		libvncserver.so:${PORTSDIR}/net/libvncserver

MASTERDIR=	${.CURDIR}/../remmina-plugins

PLIST_SUB+=	ICONS="" SSH=""

.include "${MASTERDIR}/Makefile"
