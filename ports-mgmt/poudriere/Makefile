# $FreeBSD: ports-mgmt/poudriere/Makefile 329590 2013-10-06 15:20:14Z bdrewery $

PORTNAME=	poudriere
PORTVERSION=	3.1.0.15
CATEGORIES=	ports-mgmt
MASTER_SITES=	http://leaf.dragonflybsd.org/~marino/dports-src/boomsrc/
DISTNAME=	${PORTNAME}-DF-${PORTVERSION}

# Also maintained by bdrewery@FreeBSD.org
MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Port build and test system

LICENSE=	BSD

OPTIONS_DEFINE=	ZSH

CONFLICTS_INSTALL=	poudriere-devel

USES=		uidfix
MAKE_ENV+=	${OPSYS:tu}=1

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MZSH}
PLIST_FILES+=	share/zsh/site-functions/_poudriere
PLIST_DIRSTRY+=	share/zsh/site-functions
PLIST_DIRSTRY+=	share/zsh/
.else
MAKE_ENV+=	NO_ZSH=yes
.endif

.include <bsd.port.mk>
