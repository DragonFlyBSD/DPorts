# Created by: Andrey Simonenko
# $FreeBSD: misc/ipa_conv/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	ipa_conv
PORTVERSION=	1.1
CATEGORIES=	misc
MASTER_SITES=	SF/ipa-system/modules/ipa_conv

MAINTAINER=	simon@comsys.ntu-kpi.kiev.ua
COMMENT=	IPA accounting/database module for converting statistics

BUILD_DEPENDS=	${LOCALBASE}/include/ipa_mod.h:${PORTSDIR}/sysutils/ipa

USE_BZIP2=	yes
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

PLIST_FILES=	lib/ipa_conv.la lib/ipa_conv.so

MAN8=		ipa_conv.8
MANLANG=	"" ru.KOI8-R

NO_STAGE=	yes
.include <bsd.port.mk>
