# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: net/remmina-plugin-vnc/Makefile 327755 2013-09-20 22:10:23Z bapt $

PKGNAMESUFFIX=	-vnc

COMMENT=	Remmina plugin for VNC protocol

BUILD_DEPENDS=	${LOCALBASE}/include/gcrypt.h:${PORTSDIR}/security/libgcrypt
LIB_DEPENDS=	jpeg.11:${PORTSDIR}/graphics/jpeg \
		gnutls:${PORTSDIR}/security/gnutls

MASTERDIR=	${.CURDIR}/../remmina-plugins

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
