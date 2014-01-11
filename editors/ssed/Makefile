# Created by: verm
# $FreeBSD: editors/ssed/Makefile 339037 2014-01-07 21:11:44Z antoine $

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

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MNLS}
USES+=		gettext iconv
CONFIGURE_ARGS+=	${ICONV_CONFIGURE_ARG}
PLIST_SUB+=	NLS=""
.else
CONFIGURE_ARGS+=	--disable-nls
PLIST_SUB+=	NLS="@comment "
.endif

.include <bsd.port.mk>
