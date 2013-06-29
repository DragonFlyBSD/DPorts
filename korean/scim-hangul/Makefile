# Created by: Junho CHOI <junho.choi@gmail.com>
# $FreeBSD: korean/scim-hangul/Makefile 321160 2013-06-17 23:04:51Z jkim $

PORTNAME=	scim-hangul
PORTVERSION=	0.4.0
CATEGORIES=	korean
MASTER_SITES=	SF/scim/${PORTNAME}/${PORTVERSION}

MAINTAINER=	jkim@FreeBSD.org
COMMENT=	SCIM IMEngine module for Korean(Hangul) input

LICENSE=	GPLv2

LIB_DEPENDS=	hangul:${PORTSDIR}/korean/libhangul \
		scim-1.0:${PORTSDIR}/textproc/scim

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USES=		pkgconfig

OPTIONS_DEFINE=	NLS

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MNLS}
USES+=		gettext
PLIST_SUB+=	NLS=""
.else
CONFIGURE_ARGS+=--disable-nls
PLIST_SUB+=	NLS="@comment "
.endif

post-install:
	@${CAT} ${PKGMESSAGE}
	@${ECHO}
	@${ECHO} To display this message again, type \`pkg_info -D ${PKGNAME}\'
	@${ECHO}

.include <bsd.port.mk>
