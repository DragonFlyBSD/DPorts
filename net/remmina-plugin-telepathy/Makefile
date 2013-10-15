# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: net/remmina-plugin-telepathy/Makefile 327755 2013-09-20 22:10:23Z bapt $

PKGNAMESUFFIX=	-telepathy

COMMENT=	Remmina plugin for Telepathy support

LIB_DEPENDS=	telepathy-glib.0:${PORTSDIR}/net-im/telepathy-glib

MASTERDIR=	${.CURDIR}/../remmina-plugins

WITH_TELEP=	yes

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
