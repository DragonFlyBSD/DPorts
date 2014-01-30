# Created by: Koichiro IWAO <meta+ports@vmeta.jp>
# $FreeBSD: net/remmina-plugin-nx/Makefile 340367 2014-01-20 04:45:49Z fluffy $

PKGNAMESUFFIX=	-nx

COMMENT=	Remmina plugin for NX

USE_XORG+=	xkbfile

MASTERDIR=	${.CURDIR}/../remmina-plugins

LIB_DEPENDS+=	libssh.so:${PORTSDIR}/security/libssh

PLIST_SUB+=	ICONS="" SSH="@comment "

.include "${MASTERDIR}/Makefile"
