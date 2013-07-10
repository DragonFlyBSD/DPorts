# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: net/remmina-plugin-vnc/Makefile 321344 2013-06-20 01:59:25Z fluffy $

PKGNAMESUFFIX=	-vnc

COMMENT=	Remmina plugin for VNC protocol

BUILD_DEPENDS=	${LOCALBASE}/include/gcrypt.h:${PORTSDIR}/security/libgcrypt
LIB_DEPENDS=	jpeg.11:${PORTSDIR}/graphics/jpeg \
		gnutls:${PORTSDIR}/security/gnutls

MASTERDIR=	${.CURDIR}/../remmina-plugins

.include "${MASTERDIR}/Makefile"
