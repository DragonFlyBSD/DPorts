# New ports collection makefile for:	ssed
# Date created:		28 May 2002
# Whom:			verm
#
# $FreeBSD: ports/editors/ssed/Makefile,v 1.19 2012/11/17 05:57:18 svnexp Exp $
#

PORTNAME=	sed
PORTVERSION=	3.62
PORTREVISION=	3
CATEGORIES=	editors textproc
MASTER_SITES=	http://sed.sourceforge.net/grabbag/ssed/
PKGNAMEPREFIX=	s

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Super-sed - a heavily enhanced version of sed

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--program-prefix=s

MAN1=		ssed.1

.if defined(WITHOUT_NLS)
CONFIGURE_ARGS+=	--disable-nls
PLIST_SUB+=	NLS="@comment "
.else
USE_GETTEXT=	yes
CONFIGURE_ARGS+=	--with-libiconv-prefix=${LOCALBASE}
PLIST_SUB+=	NLS=""
.endif

.include <bsd.port.mk>
