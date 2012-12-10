# New ports collection makefile for:	ipa_conv
# Date created:				28 July 2009
# Whom:					Andrey Simonenko
#
# $FreeBSD: ports/misc/ipa_conv/Makefile,v 1.3 2012/11/17 05:59:38 svnexp Exp $
#

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

.include <bsd.port.mk>
